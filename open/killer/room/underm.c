#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","宿舍地下密室");
  set ("long", @LONG
这里是柴荣所指示的密室，看来你要的人就在这里了。千万不可以掉以轻心。
由房中传来的阵阵杀气看来，此人已经起了杀机，想要动手杀了你。
如果，你没有把握的话，还是尽快的从南方的狗洞爬出去吧。 

LONG);

  set("exits", ([ /* sizeof() == 3 */
"south":__DIR__"outr0.c",
]));

  set("objects",([
        "/open/killer/npc/wanted.c":1,
        "/open/main/obj/torch" : 1,
        ]));
  setup();
}