// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","走廊");
        set("long", @LONG
这儿是广场四周的走廊，这个走廊做的十分考究，地上是用实心
的沈香木所铺，而四周的栏干则是用熟铁打造的，使得这个四方形的
走廊在白天太阳的照射下显得十分耀眼。
LONG);
set("exits", ([
	"south":__DIR__"r32",
	"west":__DIR__"r34",
	"east":__DIR__"r55",
]));
  set("light_up",1);
  setup();
}
