// Room: /open/death/eroad.c

inherit ROOM;

void create ()
{
  set ("short", "�زض�·");
  set ("long", @LONG

����һ��ʲô��û�еķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/death/square",
  "south" : "/open/death/house2",
  "east" : "/open/death/house1",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
