// Room: /open/main/room/r41.c

inherit ROOM;

void create ()
{
  set ("short", "����·");
  set ("long", @LONG
����һ��������ĵ�·,������ƽ�ϳ�,����������置.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"maiu-1.c",
  "north" : __DIR__"L13",
  "east" : "/open/ping/room/wdoor",
]));
  set("outdoors", "/open/main");

  setup();
}
