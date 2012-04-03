// Room: /open/start/room/s14.c

inherit ROOM;

void create ()
{
  set ("short", "东村口");
  set ("long", @LONG
这里是凌云村东面的村口，从这儿一直往东可以通
往中央驿站，那里是全国交通的要冲，许多人都会在那
聚集。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/s11",
  "east" : "/open/main/room/r21",
]));

  set("outdoors", "/open/start");

  setup();
}
