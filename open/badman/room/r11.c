// Room: /open/badman/room/r11
inherit ROOM;

void create ()
{
  set ("short", "�������¥");
  set ("long", @LONG
��û�뵽....:b

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"r10",
]));
  set("light_up", 1);

  setup();
}
