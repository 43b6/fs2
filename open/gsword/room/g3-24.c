// Room: /open/gsword/room/g3-24.c
inherit ROOM;

void create()
{
  set ("short", "����ң֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-15",
]) );

  setup();
}
