// Room: /open/gsword/room/g3-21.c
inherit ROOM;

void create()
{
  set ("short", "�Ժ�֮�޾�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g3-16",
]) );

  setup();
}
