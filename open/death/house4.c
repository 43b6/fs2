// Room: /open/death/house4
inherit ROOM;

void create ()
{
  set ("short", "鬼屋");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/death/wroad",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );


  setup();
}
