// Room: /open/death/office
inherit ROOM;

void create ()
{
  set ("short", "���޵�");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/death/nroad",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
