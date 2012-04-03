// Room: /open/capital/room/r67.c

inherit ROOM;

void create ()
{
  set ("short", "中央街口");
  set ("long", @LONG
这是一个交叉路口，在你的东边是扁鹊胡同，是医者工会所在地,
西边的文来胡同则是书生工会之所在。如果你对医生或书生有兴趣的话
不妨过去瞧瞧。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r69",
  "north" : __DIR__"r66",
  "west" : __DIR__"h04",
  "east" : __DIR__"h06",
]));
  set("outdoors", "/open/capital");

  setup();
}
