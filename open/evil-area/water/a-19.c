inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
�������������������ů�紵�����о��ò�ʹ�졫
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-20",
"east":__DIR__"a-18",
]));
	setup();
}

 