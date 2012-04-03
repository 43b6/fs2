// Room: /open/death/nroad.c

inherit ROOM;

void create ()
{
  set ("short", "���ޱ�·");
  set ("long", @LONG

����һ��ʲô��û�еķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/death/office",
  "west" : "/open/death/bank.c",
  "south" : "/open/death/square",
  "east" : "/open/death/blackshop",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
