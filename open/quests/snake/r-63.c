inherit ROOM;

void create()
{
	set("short","蛇寨 三层大厅");
	set("long",@LONG
虽然不是很清楚，但你可以确定北边有一座批着大蛇皮的座椅，
似乎是蛇寨寨主的座椅，不过要通往那路上，似乎有许多的高手正在
等待着你自投罗网。。
LONG);
	set("objects",([
__DIR__"npc/crazy_snake":1,
__DIR__"npc/poison_soldier":1,
__DIR__"npc/snake_soldier":1,
]));
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"r-64",
"west":__DIR__"r-62",
"north":__DIR__"r-65",
]));
	setup();
}
