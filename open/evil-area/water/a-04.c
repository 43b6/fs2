inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
������һ��ľ�ƵĽ�����������һ�����Ƶ�����д�ż�����
�֣��������ƺ���δ�����������壬�����Ѿ��Ǳ�ɽ������ס����ȥ
·���ϱ��붫������������Ĳ���������Կ���������а������һ
�������š�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-03",
"east":__DIR__"a-05",
"west":__DIR__"a-28",
]));
	setup();
}

 