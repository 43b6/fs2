// post.c ���� by babe
//
// �������� wade ��д�� /std/bboard.c
// ԭ���ǰѱ�����д�� add_action() ����ɵ�����,
// ���ڰ������������ͨ����.
// ����ǩ������ʹ��.
// by wade in 6/30/1996
// ����post.expδ��5000�޷���postָ��post����!!
 
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
  tell_object(me,"������ϡ�\n");
 
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

//�տ�վҪ���˻ر�bug,��������ȡ��by bss
/*
  if (me->query("combat_exp") < 1100)
    return notify_fail("��Ľ�����������(EXPδ��1100)����ʹ�ò���������������!!!\n");
*/
  if(me->query("id") == "guest")
   return notify_fail("���벻����,����post!!�Կ����������ֱ��mail������!!\n");

  if (!board = present("board",environment(me)))
    return notify_fail( "ι! �����һ��, û�а���, ���������?\n" );
  if (board->query("wiz_post"))
   if(wizardp(me))
   sprintf("\n");
    
   else
      return notify_fail("���������ֻ����ʦ�ܷ�������!!!\n");

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
ָ���ʽ : post [-ed] <����>
ָ��˵�� :
           ���������������棬���û�� -ed ѡ������
         ���淽ʽһ��������� -ed ѡ�����ϵͳ�ṩ��
         �༭����ǰһ�����ھ��͵ķ�ʽ����һ��Ϊһ����ʦ
         ���ڱ༭����ʱ�õı༭������� -ed����:
           post test
           post -ed test
 
         ������һ��Ҫ���а��ӵĵط�ʹ��
�����ο� :
      1.�� help edit_file ȡ��˵������������� -ed ѡ
        ���������棬��������ʱ������ð��ģʽ�°� h ȡ
        ������˵����
      2.������� followup �������ƣ��� help followup��
      3. ������������ǩ����ʹ�ã���ο� sig ���
HELP
    );
    return 1;
}
