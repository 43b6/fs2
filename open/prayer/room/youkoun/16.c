//open/prayer/room/youkoun/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的正东方, 有两个女弟子正在交换彼此的心得.
        你走进一听, 只听到模模糊糊的几句 :" 你这样子不行,
        一旦动作太大, 就会有侧陋的问题.."

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"9",             //练武场
        "south":__DIR__"19",            //练武场
        "west":__DIR__"17",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //弟子
        "/open/prayer/npc/trainee3" : 1,                //弟子
                
]));
     
  setup();
}
