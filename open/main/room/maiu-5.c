// Room: /open/main/room/maiu-5.c
inherit ROOM;

void create()
{
  set ("short", "竹屋");
  set ("long", @LONG
你走进一间小竹屋,这里显然比一般苗人的居所来的洁净,然而
还是一般的简陋,一张小木桌,几张小椅子,就这样随地摆放.
LONG);
  set("objects",([
  "open/ping/npc/maiu-king" : 1,
  ]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"maiu-4",
]));
  setup();
}
