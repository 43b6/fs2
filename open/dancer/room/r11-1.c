// Room: /open/dancer/room/r11-1.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在枫林之中，放眼望去尽是一片树海，茂密的树木几乎将
阳光完全阻挡，只有些许光线由树缝中射入。然而你耳边却清悉可闻
海浪之声，你心想也许是快到海边了吧。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r11-2.c",

]));

  set("light_up", 0);

  setup();
}
