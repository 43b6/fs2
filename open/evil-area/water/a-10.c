inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
�����ں����ԣ�����һ��˵�����������ʸС�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-11",
"north":__DIR__"a-09",
]));
	setup();
}

 