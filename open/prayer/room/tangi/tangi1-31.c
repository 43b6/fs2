//open/prayer/room/tangi/tangi1-31.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",
"此处是明教分部之一的天机门的练武场,练武场上的弟子正在勤练镇教武学--
先天乾坤功的基础功夫.往北是天机门的大厅,往南则是天机门的大门(open door). \n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-26",		//练武场
	"south":"/open/prayer/room/tangi/tangi1-34",		//练武场
	"east":"/open/prayer/room/tangi/tangi1-32",		//练武场
        "west":"/open/prayer/room/tangi/tangi1-30",		//练武场
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4.c" : 2,		//弟子
   		
]));
     set("light_up", 1);
     create_door("south","圣火刻纹精钢大门","north",DOOR_CLOSED);
  setup();
}
