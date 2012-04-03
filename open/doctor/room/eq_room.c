// Room: /open/doctor/room/eq_room.c made by adam..


inherit ROOM;

void create ()
{
  set ("short", "大夫休息室");
  set ("long", @LONG

进到这里，你可以尽情的休息。对于刚作完整日医疗的你，
这里是你最好的休息场所。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"2",
]));

  set("no_fight", 1);

  set("light_up", 1);
  set("no_magic", 1);

  setup();
}


