inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","蛇寨 地下室");
	set("long",@LONG
这里摆放着许多的火把～在火把包围的中央，有一块微微凸起的
石块，在石块的北边不远处有一道石门，石门上刻着蛇的雕像。
LONG);
	set("item_desc",([
"火把":"熊熊的烈火不断的燃烧着火把。\n",
"石块":"石块上似乎能放置某种物品...\n",
"门":"门上雕刻着蛇的画像，并且紧闭着。\n",
"石门":"门上雕刻着蛇的画像，并且紧闭着。\n",
"door":"门上雕刻着蛇的画像，并且紧闭着。\n",
]));
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"r-42",
]));
	setup();
}

void init()
{
add_action("do_put","put");
add_action("do_enter","enter");
}

int do_put(string arg)
{
object me;

	me = this_player();

	if( !arg )
		return 0;
	if( arg != "snake statue" && arg != "statue" )
		return 0;

	if( !present("snake-key-2",me) )
		return notify_fail("你尝试着将蛇雕像摆\上去，不过大小似乎不一样。\n");

	message_vision("$N顺利的将雕像摆\上去～\n",me);
	call_out("door",3,me);
	destruct(present("snake-key-2",me));
return 1;
}

int door(object me)
{
	message_vision("门缓缓的开启了。\n",me);
	set("exits/north",__DIR__"r-44");
return 1;
}

int valid_leave(object me,string dir)
{
	if( dir == "north" )
	{
		message_vision(HIY"$N一踏过门槛，门就随即关上。\n"NOR,me);
		delete("exits/north");
	}
return 1;
}