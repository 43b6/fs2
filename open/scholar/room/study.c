#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "���鷿");
  set ("long", @LONG
����ʵ�Ĳ��ã������ڴ��ܷſ����أ������Լ�
���ģ��úõĶ��飬������ڴ�С˯һ�����ָ�һ����
���ľ���

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r17.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/obj/iron.c" : 1,
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object who,string dir)
{
    if( dir == "south" && who->query_temp("sleeping") )
     return notify_fail("ȥ����������ΰ���\n");
     if( dir == "south" && who->query_temp("sleep") )
		return notify_fail("��Ȼ���˾�˯(sleep)һ�����߰ɡ�\n");
	return ::valid_leave(who,dir);
}

void init()
{
	add_action("do_sleep","sleep");
	add_action("do_look", "look");
	add_action("do_score", "score");
	add_action("do_score", "hp");
    add_action("do_study", "study");
}

int do_sleep(string arg)
{
	object who;
	who = this_player();
	if( who->query_temp("sleeping") )
	{
		tell_object(who, "���Ѿ�˯���ˣ�����˯��������\n");
		return 1;
	}
	tell_object(who, "�����ڷ������С���ϣ�������˯��������\n");
	who->delete_temp("sleep");
        who->set_temp("sleeping", 1);
     call_out("wakeup", 10,who);
	return 1;
}

int wakeup(object who)
{
	tell_object(who, HIC"һ���������������ľ������Իָ��ˡ�\n"NOR);
    who->receive_heal("sen",100);
	who->delete_temp("sleeping");
	return 1;
}

int do_look()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
		tell_object(who, "Ҫ˯���۾��͸��ҹԹԱ��ţ���Ҫ����������\n");
		return 1;
	}
}

int do_score()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
		tell_object(who, "��������˯�����Ͷ���������\n");
		return 1;
	}
}
int do_study()
{
        object who = this_player();

        if( who->query_temp("sleeping") )
        {
                tell_object(who, "��������˯�����Ϳ��Զ�������\n");
                return 1;
        }
}
