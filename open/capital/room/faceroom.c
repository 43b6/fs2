
#include <ansi.h>

inherit ROOM;

void create()
{
    set("short", "������");
	set("long", @LONG
һ������޻���һ��,�����װ��е��̬,�������ֱ�
��һ����̨,������ǰվ��һλ�׳ݵ�С����,��֪����
�������

LONG );

        set("exits", ([ /* sizeof() == 1 */
             "west"   : __DIR__"sexroom",
	]));

  set("objects", ([ /* sizeof() == 1 */
      "/open/capital/npc/shyu3"       :     1,
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
	set("light_up", 1);

	setup();
}
int valid_leave(object who,string dir)
{
     if( dir == "west" && who->query_temp("sleeping") )
               return notify_fail("���Ҷ�,��һ�»������죿��\n");
	return ::valid_leave(who,dir);
}

void init()
{
         add_action("do_faceoff","faceoff");
	add_action("do_look", "look");
	add_action("do_score", "score");
}

int do_faceoff(string arg)
{
	object who;
	who=this_player();

	if( who->query_temp("sleeping") )
	{
  tell_object(who, "�����������Ш˨ߣ�����\n");
		return 1;
	}
      if( !who->query_temp("faceoff") )
	{
   tell_object(who, "������˵�� : ������Ҫ���͵����渶Ǯ��\n");
		return 1;
	}
   tell_object(who, "������������˸���ҩ����ʼ��˯��ȥ��\n");
         who->delete_temp("faceoff");
	who->set_temp("sleeping", 1);
	call_out("wakeup", 8, who);
	return 1;
}

int wakeup(object who)
{
tell_object(who, HIC"ͻȻ֮��������Լ��ݹ⻽����\n"NOR);
    who->add("per",3);
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
