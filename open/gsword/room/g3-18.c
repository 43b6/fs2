// Room: /open/gsword/room/g3-18.c
inherit ROOM;

void create()
{
  set ("short", "�ų˷�֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-17",
]) );

  setup();
}
