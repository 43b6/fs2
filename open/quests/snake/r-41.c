inherit ROOM;
#include <way.c>

void create()
{
	set("short","蛇寨 地下室");
	set("long",@LONG

		～　开始有点亮光，不过依旧黑暗 ～

LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/poison_soldier":3,
]));
	set("exits",([
"north":__DIR__"r-42",
"south":__DIR__"r-30",
]));
	setup();
}
