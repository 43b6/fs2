//open/prayer/room/kiyan/1-door.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","玄关");
        set("long",@LONG

	开阳门的玄关, 往里面进去便是开阳门的议事厅(open door). 
	外面则是开阳门的练武场, 练武场上到处都是练功强身的弟子
	这么多的弟子在学武, 也难怪圣火教能够在西域威罢一方了.

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"7",		//议事厅
        "south":__DIR__"14",		//练武场
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/duty" : 2,		//值班弟子
   		
]));
        set("no_fight", 0);
        set("light_up", 1);
        create_door("north","圣火刻纹木雕门", "south",DOOR_CLOSED);
  setup();
}
