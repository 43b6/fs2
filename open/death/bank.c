// Room: /open/death/bank
inherit ROOM;

void create ()
{
  set ("short", "鬼钱庄");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/death/nroad",
]));

  set("file_name", "/open/death/bank");
  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
