// Room: /open/death/square.c

inherit ROOM;

void create ()
{
  set ("short", "����㳡");
  set ("long", @LONG

����һ��ʲô��û�еĹ㳡
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/death/road2.c",
  "north" : "/open/death/nroad",
  "west" : "/open/death/wroad",
  "east" : "/open/death/eroad.c",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
