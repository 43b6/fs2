// Room: /open/gsword/room/g3-19.c
inherit ROOM;

void create()
{
  set ("short", "�ų���֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g3-17",
]) );

  setup();
}
