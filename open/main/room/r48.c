// Room: /open/main/room/r48.c

inherit ROOM;

void create ()
{
  set ("short", "黄土小路");
  set ("long", @LONG
这里已经离中土有点距离了，虽然还在王朝的管辖范围，
可是在此出了事可难期望王朝给的保护. 这你似乎有盗贼出没
，你得自己小心. 道路在此呈东西走.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L20",
  "west" : __DIR__"r47",
  "south" : __DIR__"f30",
  "east" : __DIR__"r49",
]));

  set("outdoors", "/open/main");

  setup();
}
