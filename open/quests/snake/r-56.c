inherit ROOM;

void create()
{
	set("short","蛇寨 回廊");
	set("long",@LONG
这里是一个阴暗的回廊，北边有着一个巨大的蛇雕，你身在回廊
中，偶尔会听到吵杂的交谈声，看来你似乎离蛇寨的中心不远了。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"west":__DIR__"r-57",
"north":__DIR__"r-51",
]));
	setup();
}
