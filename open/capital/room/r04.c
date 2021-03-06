// Room: /open/capital/room/r04.c

inherit ROOM;

void create ()
{
  set ("short", "环宫大道");
  set ("long", @LONG
你现在来到京城内的大街, 高耸的围墙和华丽的基石, 北方的城楼
烘托出一股庄严肃穆的气氛, 皇上所住的皇宫便位于北方, 而整齐宽敞
的街道更显出北方皇宫的气派。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r03",
  "east" : "/open/capital/room/r05",
]));

  set("gopath", "east");

  setup();
}
