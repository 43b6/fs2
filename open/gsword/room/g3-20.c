// Room: /open/gsword/room/g3-20.c
inherit ROOM;

void create()
{
  set ("short", "����֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-17",
]) );

  setup();
}
