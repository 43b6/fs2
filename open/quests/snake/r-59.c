inherit ROOM;

void create()
{
	set("short","蛇寨 二层回廊");
	set("long",@LONG
回廊不断的延伸，阴暗与潮湿的气味也渐渐地加重，一股酸臭味
使你忍不住地摀住鼻子，两旁的石壁迫使着你只能照着唯一的通道行
走，你无奈的摇了摇头，只好捏着鼻子继续赶路。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"north":__DIR__"r-60",
"west":__DIR__"r-58",
]));
	setup();
}
