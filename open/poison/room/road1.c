#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "阴朁道");
  set ("long", @LONG
这里是武林中最令人畏惧的一条道路「阴朁道”这条路往西通往冥
蛊魔教的总地「冥蛊魔殿”，在这里要小心，四周的任何事物都可能已
经被人下了毒，如果随意触摸，性命难保。
LONG);

  set("light_up", 1);

  setup();
}
