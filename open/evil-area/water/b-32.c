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
"up":__DIR__"b-33",
"down":__DIR__"b-31",
]));
	setup();
}