#include <room.h>

inherit ROOM;

void create()
{
        set("short","洞穴外");
         set("long","这里是洞穴的外面，似乎这里已不在蜀中城内，在前方不远处可以看一座雪苍山。\n");
        set("exits", ([
		"south":__DIR__"hole3",
        ]) );
	set("light_up",1);
        setup();
}
