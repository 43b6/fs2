//__DIR__"16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的休息室");
        set("long",@LONG

	玉衡门总管的休息室, 这里是总管休息的地方. 
        平常总管如果办公累了. 就会来这里休息, 四周
        的摆设看来相当典雅. 让人看了觉得相当舒服.□LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"19",		//总管房
        "south":__DIR__"17",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/paltoon1" : 1,		//保镳
        "/open/prayer/npc/paltoon2" : 1,		//保镳
   		
]));
     
  setup();
}
