//open/prayer/room/youkoun/17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的正中央, 有两个较早入门的弟子正在示范动作
        给一旁的师妹们看. 看她们的样子, 似乎真有那么两下子
        , 一点也不是花拳绣腿, 看得你都技痒了..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"10",            //练武场
        "south":__DIR__"20",            //练武场
        "west":__DIR__"18",             //练武场
        "east":__DIR__"16",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //弟子
        "/open/prayer/npc/trainee4" : 1,                //弟子
                
]));
     
  setup();
}
