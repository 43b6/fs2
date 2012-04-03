// Room: /open/main/room/f10.c

inherit ROOM;

void create ()
{
  set ("short", "林中小径");
  set ("long", @LONG
你走在一条不知名的林中小径上，两旁住着一些以此森
林为生的散户，附近尽是高大的林木，远方传来阵阵的流水
声，这里十分的清静。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/poison/room/room4",
  "north" : "/open/poison/room/room3",
  "east" : "/open/poison/room/road2",
  "southwest" : "/open/poison/room/road4",
]));
  set("outdoors", "/open/main");

  setup();
}
