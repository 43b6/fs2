#include <room.h>
#include "../../open.h"
inherit ROOM;

void create()
{
set("short","装备存放处");
          set("long",@LONG
这里就是叶秀杀所说的房间，有一个尸魂人在把守的灭神匕首
如果没有两把刷子，还是不要冒险的好。
LONG);
        set("exits", ([
"south":__DIR__"misrm1.c",
        ]) );
set("objects",([
    "/open/killer/npc/ghost1":1,
]));
set("light_up",1);
        setup();
}