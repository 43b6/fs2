//open/prayer/room/tanchun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天权门大厅");
        set("long",@LONG

	大厅之四周都是放置武器的架子，整座大听充满了兵器所散发出
	来的金属味．壁上有一幅大型的图画，是门主的画像．厅上所站
	立的是天权门的左护法．!!

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"1",		//门主
        "south":__DIR__"6",	            
        "west":__DIR__"29", 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/left" : 1,		//左护法
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(me->query("class")!="prayer"&&dir=="west")
	return notify_fail("对不起, 里面是天权门弟子的练功之地!!\n");
                      
	return ::valid_leave(me,dir);
}
