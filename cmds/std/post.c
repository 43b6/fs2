// post.c 修正 by babe
//
// 本命令由 wade 改写自 /std/bboard.c
// 原先是把本命令写成 add_action() 所造成的命令,
// 现在搬来这儿当成普通命令.
// 增加签名档的使用.
// by wade in 6/30/1996
// 修正post.exp未满5000无法用post指令post文章!!
 
#include <ansi.h>
 
#define BOARD_CAPACITY query("capacity")
 
inherit F_CLEAN_UP;
 
int help(object);
 
void done_post(object me,object board,mapping note,string text)
{
  mapping last_read_time;
  string myid;
  mapping *notes;
  int c;
  string sigfn,sig,id;
 
  seteuid(ROOT_UID);
  last_read_time = me->query("board_last_read");
  myid = board->query("board_id");
  id = me->query("id");
  if(id=="guest") return;
  sigfn = sprintf ("%s/sig/%s/%s.sig",DATA_DIR,id[0..0],id);
 
  if (sig = read_file (sigfn))
    note["msg"] = text + "\n--\n"+sig;
  else
    note["msg"] = text;
 
  notes = board->query("notes");
 
  if ( !pointerp(notes) || !sizeof(notes) )
    notes = ({ note });
  else
    notes += ({ note });
 
  // Truncate the notes if maximum capacity exceeded.
  c = board->BOARD_CAPACITY;
  if (sizeof(notes) > c)
    notes = notes[c / 2 .. c];
 
  board->set("notes",notes);
  tell_object(me,"留言完毕。\n");
 
  // Keep track which post we were reading last time.
  if ( !mapp(last_read_time) )
    me->set("board_last_read",([ myid: note["time"] ]) );
  else if (undefinedp(last_read_time[myid]) || note["time"] >
    last_read_time[myid] )
  {
    last_read_time[myid] = note["time"];
  }
 
  board->save();
  return;
}
 
void ed_exit()
{
  object board;
  mapping note;
  string fn,buf;
  string sigfn,sig,myid;
 
  seteuid(ROOT_UID);
  board = this_player()->query_temp("post/board");
  note = this_player()->query_temp("post/note");
  fn = this_player()->query_temp("post/fn");
 
  myid = this_player()->query("id");
  sigfn = sprintf ("%s/sig/%s/%s.sig",DATA_DIR,myid[0..0],myid);
  if (sig = read_file (sigfn))
    buf = read_file(fn) + "\n--\n" + sig;
  else
    buf = read_file(fn);
  rm (fn);
  done_post (this_player(),board,note,buf);
  buf = 0;
}
 
int main(object me,string arg)
{
  mapping note;
  object  board;
  string  op,fname;
 
  if (me != previous_object()) return 0;
 
  seteuid(geteuid(me));
 
  if (!arg) return help(me);
  if (sscanf (arg,"%s %s",op,fname) == 2 && op == "-ed") arg = fname;
  else op = "";

//刚开站要给人回报bug,所以限制取消by bss
/*
  if (me->query("combat_exp") < 1100)
    return notify_fail("你的江湖历练不足(EXP未满1100)不能使用布告栏，发表文章!!!\n");
*/
  if(me->query("id") == "guest")
   return notify_fail("狂想不接受,昵名post!!对狂想有意见请直接mail给大神!!\n");

  if (!board = present("board",environment(me)))
    return notify_fail( "喂! 看清楚一点, 没有板子, 如何贴布告?\n" );
  if (board->query("wiz_post"))
   if(wizardp(me))
   sprintf("\n");
    
   else
      return notify_fail("这个布告栏只有巫师能发表文章!!!\n");

  note = allocate_mapping(4);
  note["title"] = HIG""HIC + arg;
  note["author"] = me->query("name")+"("+me->query("id")+")";
  note["time"] = time();
 
  if (op != "-ed") me->edit( (: done_post,me,board,note :) );
  else {
    fname = "/player/edit/"+time();
    me->set_temp("post/board",board);
    me->set_temp("post/note",note);
    me->set_temp("post/fn",fname);
 
    ed (fname,"ed_exit");
  }
  return 1;
}
 
int help(object me)
{
  write(@HELP
指令格式 : post [-ed] <标题>
指令说明 :
           本命令用来贴布告，如果没有 -ed 选项，则跟贴
         布告方式一样，如果有 -ed 选项，则是系统提供的
         编辑器，前一种属于旧型的方式，后一种为一般巫师
         们在编辑档案时用的编辑器，需加 -ed，如:
           post test
           post -ed test
 
         本命令一定要在有版子的地方使用
其他参考 :
      1.请 help edit_file 取得说明，如果您是用 -ed 选
        项来贴布告，在贴布告时，可在冒号模式下按 h 取
        得线上说明。
      2.本命令跟 followup 命令类似，请 help followup。
      3. 本命令可以配合签名档使用，请参考 sig 命令。
HELP
    );
    return 1;
}
