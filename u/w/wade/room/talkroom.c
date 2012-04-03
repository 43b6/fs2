// Room: /u/w/wade/workroom.c
#include <room.h>

inherit ROOM;
inherit F_SAVE;

void create ()
{
  set ("short", "������");
  set ("long", @LONG




	���������������,
	ר�Ÿ����İ��Ŀ��������




LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 3 */
        "down"	: "/u/w/wade/workroom",
  ]));

  restore();
  setup();
  call_other("/obj/board/wade_talk_b", "???");
}

void init ()
{
  object	mbox;
  string	id;
  string	*f;

  id = this_player()->query("id");
  f = this_object()->query("friends");

  if (id == "wade") {
    add_action("setf", "setf");
    add_action("delf", "delf");
    add_action("do_save", "sr");
  }
  else if ( !f || member_array(id, f) == -1 )
  {
    write ("��, ���ﲻ��ӭ����������Ү!\n");
    this_player()->move("/open/center/room/inn");
    return;
  }

  seteuid(getuid());

  // ��������.
  if( !this_player()->query_temp("mbox_ob") ) {
    mbox = new(MAILBOX_OB);
    if (mbox->move(this_player()))
      write ("Ϊ�����ķ���, ���������һ�ſ�ݵ�.\n");
  }
  add_action ("do_home", "home");
  add_action ("do_home", "goto");
}

int setf(string arg)
{
  string	*f;
  object	ob;

  if (this_player()->query("id") != "wade")
    return notify_fail("ֻ�������ܶ��!\n");

  f = this_object()->query("friends");
  if (!f)
    f = ({ arg });
  else if (member_array(arg, f) == -1)
    f += ({ arg });
 
  set("friends",f);
  write ("�Ѿ��� "+ arg +"��Ϊ������!\n");
  if (ob=find_player(arg)) {
    tell_object(ob, this_player()->query("name")+
		"������ȥ����, Ը��Ļ��� goto wade\n");
    write ("����, �Ѿ�������������!\n");
  }
  return 1;
}

int delf(string arg)
{
  object	ob;
  string        *f;

  if (this_player()->query("id") != "wade")
    return notify_fail("ֻ�������ܶ��!\n");

  f = this_object()->query("friends");
  if (!f)
    return notify_fail ("�������Ѿ�û���κ�������\n");
  else if (member_array(arg, f) == -1)
    return notify_fail (arg+"�ֲ���������, �������?!\n");

  if (ob=present(arg, this_object())) {
    write ("�ð�, ˳������߳�ȥ��!\n");
    ob->move("/open/center/room/inn");
    tell_object(ob, "�㱻�߳�ȥ��, ��Ǹ!\n");
  }
  printf ("������: %O\n", f);
  f = f - ({ arg });
  printf ("������: %O\n", f);
  set ("friends", f);
  return 1;
}

string query_save_file()
{
  return "/u/w/wade/room/talkroom";
}

int do_save()
{
  save();
  write ("���䴢�����!\n");
  return 1;
}

int valid_leave(object me, string dir)
{
        object mbox;

        if( mbox = me->query_temp("mbox_ob") ) {
                tell_object(me, "�㽫���佻����վ��\n");
                destruct(mbox);
        }
        return 1;
}

int do_home(string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "�㽫���佻����վ��\n");
    destruct(mbox);
  }

  return 0;
}
