// Room: /open/death/betroom
inherit ROOM;

void create()
{
  set ("short", "赌场");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("light_up", 1 );

  set("no_magic", 1 );

  set("no_fight", 1 );

  setup();
}
