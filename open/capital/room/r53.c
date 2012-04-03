// Room: /open/capital/room/r53.c

inherit ROOM;

void create ()
{
  set ("short", "街道");
  set ("long", @LONG
这儿是皇城祭坛旁的街道, 因此装修的非常美观, 看起来一尘不染
的。由这儿可以通向云洋大街与环宫大道, 是到皇宫的必经之路。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r52",
  "south" : __DIR__"r57",
]));
  set("outdoors", "/open/capital");

  setup();
}
