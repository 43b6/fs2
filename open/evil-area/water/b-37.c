inherit ROOM;
#include <ansi.h>
#include <tree.c>
#include <tree.msg>

void create()
{
	set("short",HIG"�� �� �� -- "NOR+YEL"�� �� ��"NOR);
	set("long",(: printf_tree :));
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"down":__DIR__"b-36",
"up":__DIR__"b-42",
]));
	setup();
}