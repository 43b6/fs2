// Room: /open/gsword/room/eghouse4.c
inherit ROOM;

void create()
{
  set ("short", "大师兄的寝居");
  set ("long", @LONG
这是仙剑派大师兄的寝居，左边是一张寒玉所造的石床，
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"eghouse3",
]) );

  setup();
}
