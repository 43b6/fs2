// Room: /open/death/wroad.c

inherit ROOM;

void create ()
{
  set ("short", "�ز���·");
  set ("long", @LONG

����һ��ʲô��û�еķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/death/house4",
  "west" : "/open/death/house3",
  "east" : "/open/death/square",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
