// Room: /open/gsword/room/suroom3.c

inherit ROOM;

void create ()
{
  set ("short", "���̼�");
  set ("long", @LONG
����һ��ʲôҲû�еĿշ��䡣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/su12",
]));

  set("light_up", 1);

  setup();
}
