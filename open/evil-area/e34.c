inherit ROOM;
#include <ansi.h>
#include <road.msg>

void create ()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",
(: print_road_msg :)
);
	set("no_transmit",1);
        set("light_up",-1);
	set("exits",([
"west":__DIR__"e33",
"east":__DIR__"w05",
"south":__DIR__"w06",
"north":__DIR__"e35",
]));
	setup();
}