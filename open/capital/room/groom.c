
#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ��Ũ���ҩζ�˱Ƕ�����������Ŀ����ҽ�����߿������ۻ�
���ң���ǰ���������ǻʹ���ͷ��ר�Ÿ������빬��̫�����
�������ҽ�������Ӳپ�ҵ��

LONG );

        set("exits", ([ /* sizeof() == 1 */
          "south"  : __DIR__"sexroom",
	]));

  set("objects", ([ /* sizeof() == 1 */
    "/open/capital/npc/shyu2"       :     1,
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
	set("light_up", 1);

	setup();
}

int valid_leave(object who,string dir)
{
     if( dir == "south" && who->query_temp("sleeping") )
                return notify_fail("���Ѻ�����ʶ������û��������\n");
	return ::valid_leave(who,dir);
}

void init()
{
        add_action("do_change","change");
	add_action("do_look", "look");
	add_action("do_score", "score");
}

int do_change(string arg)
{
	object who;
	who=this_player();

	if( who->query_temp("sleeping") )
	{
  tell_object(who, "�����������Ш˨ߣ�����\n");
		return 1;
	}
    if( !who->query_temp("change") )
	{
  tell_object(who, "����˵�� : �ģ���Ҫ�ľ͵����渶Ǯ��\n");
		return 1;
	}
  tell_object(who, "���������˸���ҩ����ʼ��˯��ȥ��\n");
        who->delete_temp("change");
	who->set_temp("sleeping", 1);
	call_out("wakeup", 8, who);
	return 1;
}

int wakeup(object who)
{
 tell_object(who, HIC"��������������棬��Ц�ĵ��˵�ͷ����\n"NOR);
  if( who->query("gender") == "����")
{    who->set("gender","Ů��");
}
 if( who->query("gender") == "Ů��")
{
 who->set("gender","����");
}
	who->delete_temp("sleeping");
	return 1;
}

int do_look()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
    tell_object(who, "�����л������飬����ร���\n");
		return 1;
	}
}

int do_score()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
 tell_object(who, "��ɶ�������������֪�����㣡\n");
		return 1;
	}
}
