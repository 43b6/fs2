#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","装备室");
  set ("long", @LONG
这里是黑牙联出任务领取兵器的地方，在这里可以看到不少的兵器
你可以看到一个装备箱，只有叶秀杀同意才可以拿取。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
"west":__DIR__"misrm1",
]));

  set("objects",([
/*        "/open/killer/npc/spy1": 1, */
        "/open/killer/obj/misbox2.c": 1,
]));
  setup();
}
