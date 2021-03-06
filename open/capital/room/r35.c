// Room: /open/capital/room/r35.c
#include </open/capital/capital.h>

inherit ROOM;

void create ()
{
  set ("short", "南城门下");
  set ("long", @LONG
往北就进入了城内，由于这里是进出城的必经之路，常有马匹的经
过，所以你还是不要在此逗留，以免招受无妄之灾。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r34",
  "south" : __DIR__"D03",
]));

  set("gopath", "north");

  setup();
}
