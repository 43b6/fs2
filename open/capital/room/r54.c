// Room: /open/capital/room/r54.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
从这里开始，都是达官贵人们的住所了，所以闲杂的人是不能在此
逗留的，在此进出的都是些有权有势的人。看着两旁的屋宇豪华, 你心
中不禁十分憧憬做官的威风起来。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r19",
  "east" : "/open/capital/room/r55",
]));

  set("outdoors", "/open/capital");

  setup();
}
