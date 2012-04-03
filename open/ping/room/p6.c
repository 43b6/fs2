// Room: /open/ping/room/p6
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
长长的走道向前延伸, 这儿有许多房间, 是段家子弟的居所, 在此
切勿大声喧哗, 免的引人反感。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p8",
  "north" : __DIR__"p7",
  "east" : __DIR__"p3",
]));
  set("light_up", 1);

  setup();
}
