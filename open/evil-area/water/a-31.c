inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",YEL"沙 屋"NOR);
	set("long",@LONG
一个混身长毛的大虫子正站立在你的眼前，它手持着一个金黄色
大汤匙，不断的搅拌着它眼前的那个大汤锅，汤锅由于受热，不断的
发出一股令人难以忍受的气味，当你一走进屋内，那只大毛虫停下了
手上的工作，望向了你。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"out":__DIR__"a-27",
]));
	set("objects",([
__DIR__"npc/sell":1,
]));
	setup();
}

 