// Room: /open/capital/room/r06.c

inherit ROOM;

void create ()
{
  set ("short", "环宫大道");
  set ("long", @LONG
你现在来到了京城的中央部份, 这儿附近是不准有人逗留的, 偌大
的道路空荡荡的, 映着大红色的高大宫墙, 别有一份风味, 不过可要小
心别被发现你在闲晃。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/capital/room/r52",
  "west" : "/open/capital/room/r05",
  "east" : "/open/capital/room/r07",
]));

  set("gopath", "east");

  setup();
}
