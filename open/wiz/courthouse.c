// Room: /open/wiz/courthouse.c

#include <login.h>
#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set( "build", 78 );
	set("long", @LONG
�����Ǳ��й����ʻ����˵ķ�Ժ����һ���Ǳ��˼�ٻ���
��Ϊ̫������ˣ��Ż�������������𲻳����йٵ�����
���⣬���ǻᱻ���й��߻ؼ�˯���! �úûش�(answer)�ɡ�   
LONG
	);
	set("light_up",1);
	set("no_fight", 1);
	set("no_transmit", 1);
	set("no_chome",1);
	set("objects", ([
		__DIR__"npc/judge":1,
]));
	set("exits", ([
		"down":	STARTROOM,
	]) );
	setup();
}

int valid_leave(object me, string dir)
{
	if (!present("judge", this_object()))
		return 1;
	else
		return 0;
}

void test_me(object me)
{
	me->set_temp("old_startroom", me->query("startroom"));
	me->set("startroom", __FILE__);
	me->set_temp("last_location", base_name(environment(me)));
	message_vision("��Ȼһ��������ס��$N��\n", me);
	me->move(this_object());
}
