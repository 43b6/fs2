// Room: /open/dancer/room/r1-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在密林之中，放眼望去尽是一片树海，茂密的树木几乎将
阳光完全阻挡，只有些许光线由树缝中射入。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/dancer/room/r2-2.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/wind_girl.c" : 1,
]));

  set("light_up", 0);

  setup();
}
