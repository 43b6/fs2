// Room: /open/badman/room/lake4.c
// written by powell 96.4.26@FS

#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "�����ܵ�");
  set ("long", @LONG
����������ͨ���ľ�ͷ�����˿�������㲻�����Ĵ���Ȼ����
�����������棬���ڳ�����ʪ��ʯ���ϳ�������̦�����ϻ�ʪ�ĺ�
��·ʱ��ʱʱ���񣬲Ų��������ǰ���Ǹ������ĵĴ�(hole)��
��֪�����ﵽ����Щʲô��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"lake4",
]));

  setup();
}

void init()
{
	add_action("do_look","look");
}

int do_look(string arg)
{
	object who;
	who = this_player();
	if (arg == "hole" ) {
	message_vision("$NͻȻ���Ľ���һ��������һ�����ѵ�����Ѩ��\n",who);
	who -> move(__DIR__"valley1");
	tell_object(who,"�㶨��һ�����ⶴѨ��Ȼ���ж��졣\n");
	return 1;
	}
	return 0;
}	
