inherit ROOM;

void create()
{
	set("short","蛇寨");
	set("long",@LONG
这里放置着一张木桌与许多的椅子，看来是供蛇寨的守卫休息的
地方，西边有着一个石制的蛇雕，看起来栩栩如生。
LONG);
	set("exits",([
"east":__DIR__"r-03",
"north":__DIR__"r-11",
]));
	setup();
}
