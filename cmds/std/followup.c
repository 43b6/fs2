// followup.c ���� by babe
//
// �������� wade ��д�� /std/bboard.c
// ԭ���ǰѱ�����д�� add_action() ����ɵ�����,
// ���ڰ������������ͨ����.
// ����ǩ������ʹ��.
// by wade in 6/30/1996
// ��������ʱ��ֻȡǰ���������
// by wade@fs 11/14/1999
 
#include <ansi.h>
 
#define BOARD_CAPACITY query("capacity")
 
inherit F_CLEAN_UP;
 
int help(object);
 
void done_post(object me,object board,mapping note,string text)
{
  mapping last_read_time;
  string myid,reply;
  mapping *notes;
  int c;
  string sigfn,sig,id;
 
  last_read_time = me->query("board_last_read");
  myid = board->query("board_id");
  id = me->query("id");
  sigfn = sprintf ("%ssig/%s/%s.sig",DATA_DIR,id[0..0],id);
 
  if (sig = read_file (sigfn))
    note["msg"] = text + "\n--\n"+sig+NOR;
  else
    note["msg"] = text+NOR;
 
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
 
  board = this_player()->query_temp("post/board");
  note = this_player()->query_temp("post/note");
  fn = this_player()->query_temp("post/fn");
  this_player()->set_temp("post",0);
 
  myid = this_player()->query("id");
  sigfn = sprintf ("%ssig/%s/%s.sig",DATA_DIR,myid[0..0],myid);
  if (sig = read_file (sigfn))
    buf = read_file(fn) + "\n--\n" + sig;
  else
    buf = read_file(fn);
 
  rm (fn);
  done_post (this_player(),board,note,buf);
  buf = 0;
}
 
int	main( object me, string arg )
{
	object	board;
	mapping	*notes, note;
	int	num;
	string	note1, note2, *tmp, old_letter, op;
 
	if( !arg )
		return help( me );
	if( !board = present( "board", environment(me) ) ) 
		return notify_fail( "ι! �����һ��, û�а���, ��λش����˵Ĳ���?\n" );
 
	if( sscanf( arg, "%s %d", op, num ) == 2 && op == "-ed")
		arg = ""+num;
	if( !sscanf( arg,"%d",num) )
		return help(me);
 
	notes = board->query("notes");
	if( num < 1 || num > sizeof(notes) )
		return notify_fail( "û����ƪ���ԡ�\n" );
	num--;
	note = allocate_mapping(4);
	note2 = (string)notes[num]["title"]; // ȡ�����ŵ� title
	if( note2[0..13] == HIG""HIC ) {
		note2 = note2[14..<1];
		note["title"]  = sprintf( HIG"Re:%3d"HIC" %s", num+1, note2 );
	}
	if( note2[0..9] == HIG"Re:" )
		note2 = note2[13..<1];
	if( note2[0..6] == HIC ) {
		note2 = note2[7..<1];
		note["title"]  = sprintf( HIG"Re:%3d"HIC"%s", num+1, note2 );
	}
	note["author"] = me->query("name")+"("+me->query("id")+")";
	note["time"]   = time();
     if(!notes[num]["msg"]) return 0;
	tmp = explode( notes[num]["msg"], "\n" );
	if( sizeof(tmp) > 8 ) {
		tmp = tmp[0..2] + ({ "\t\t��\t\t��" }) + tmp[<3..<1];
		old_letter = implode( tmp, "\n" );
	}
	else
		old_letter = notes[num]["msg"];

	note2 = replace_string( " ������" + notes[num]["author"] + "��֮����:\n"CYN + old_letter, GRN, "" );
	note2 = replace_string( note2, NOR, "" );
	note2 = GRN + "��" + note2;
	note1 = replace_string( note2, "\n", "\n: " );
	if( note1[<2..<1] == ": " )
		note1 = note1[0..<3];
	tmp = explode( note1, "\n" );
	note1 = "";
	for( num=0; num<sizeof(tmp); num++ ) {
		if( tmp[num] == ": --")
			break;
		if( strsrch( tmp[num], ": : :") != 0 )
			note1 += tmp[num] + "\n";
	}
	tmp = 0;
	note1 += NOR;
	if( op != "-ed" )
		me->edit ( (: done_post,me,board,note :),note1 );
	else {
		note2 = "/player/edit/"+time();
		me->set_temp("post/board",board);
		me->set_temp("post/note",note);
		me->set_temp("post/fn",note2);
 		write_file (note2,note1);
		ed( note2, "ed_exit" );
	}
	return 1;
}
 
int help(object me)
{
  write(@HELP
ָ���ʽ : followup [-ed] <��Ŀ>
 
ָ��˵�� :
        �����������ز��棬������Ŀ��ʾ�����ϵĲ�����
        ���û�� -ed�������ǰһ���ķ�ʽ�������� -ed
        ѡ��Ļ�������ϵͳ�ı༭�����ţ�Ҳ����һ����ʦ
        �ڱ�д����õı༭���������Ҫѧϰʹ�ô˱༭��
        �Ļ����� help edit_file��
 
        ������һ��Ҫ���а��ӵĵط�ʹ�á�
 
ʹ�÷��� :
        followup 1
        followup -ed 1
 
�ο����� :
     1. �� help edit_file ȡ��˵������������� -ed ѡ
        ���������棬��������ʱ������ð��ģʽ�°� h ȡ
        ������˵����
     2. ������� post ���ƣ��� help post��
     3. ������������ǩ����ʹ�ã���ο� sig ���
HELP
    );
    return 1;
}
