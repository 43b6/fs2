// Room: /open/death/bank
inherit ROOM;

void create ()
{
  set ("short", "��Ǯׯ");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
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
