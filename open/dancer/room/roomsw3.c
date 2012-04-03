// Room: /open/dancer/room/roomsw3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIG"梦月阁"NOR);
  set ("long", @LONG
这里是梦月阁，也算是夜梦小筑的重心之一，走到这里你闻到
了阵阵香味，原来南边是厨房传来了阵阵的饭菜香，而北方则是药
房也传来草药香味，奇怪的是这两种味道混在一起不但不会排斥，
反而溶合成一股令人舒畅的芬芳。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : "/open/dancer/room/roomsw2.c",
  "north" : "/open/dancer/room/roomsw3n.c",
  "south" : "/open/dancer/room/roomsw3s.c",

]));

  set("light_up", 1);

  setup();
}
