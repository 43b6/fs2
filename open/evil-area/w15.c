inherit ROOM;
#include <ansi.h>
#include <damage01.c>

void create()
{
        set("short",RED"-"BLU"="HIY"幻"HIG"结"HIC"界"NOR+BLU"="RED"-"NOR);
        set("long",@LONG

七彩的通道正不断的流动着, 你仿佛身在一个圆管内, 缓缓的前进着。

LONG);
        set("exits",([
"west":__DIR__"w16",
"east":__DIR__"w17",
"south":__DIR__"w18",
"north":__DIR__"w19",
]));
	set("no_transmit",1);
	set_temp("evil-place",1);
        setup();
}

