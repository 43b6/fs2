//open/prayer/room/tanchun/19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	练武场上的弟子正在练功. 传闻圣火教的武学共有三套, 其中
	之一的浑天宝鉴心法, 是女娲娘娘所遗留下来的武学!!修习之
	后不但能增强本身的内力!!更能发挥许多另人叹为观止的惊人
	美技!!不过听说要得到浑天水晶才可以修练哩!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"15",		//练武场
	"south":__DIR__"25",		//练武场
	"west":__DIR__"20",		//练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//弟子
  "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
