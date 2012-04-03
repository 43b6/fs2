// Room: /open/capital/room/q0.c
inherit ROOM;

void create ()
{
  set ("short", "幽暗的密道");
  set ("long", @LONG
你可以看到这里是一条隐密的密道, 两旁的岩石形成这条天然的隧
道, 岩石上还有涓涓的地下水点点的流下, 「滴答、滴答”的声音更增
添些许的气氛, 前方有隐隐的亮光透过来, 糢糢糊糊的看不真切。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"q1",
]));
  set("no_transmit", 1);

  setup();
}
