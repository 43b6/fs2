// Room: /open/gsword/room/g3-14.c
inherit ROOM;

void create()
{
  set ("short", "֣ʿ��֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-13",
]) );

  setup();
}
