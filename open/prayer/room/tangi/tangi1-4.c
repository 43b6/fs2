//open/prayer/room/tangi/tangi1-4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","天机门地牢");
        set("long",
"天机门内部的地牢(open door),往里面再进去便是禁锢人犯的地方.\n" );

      set("item_desc", ([ /* sizeof() == 1 */
      "east" : (: look_door,     "east" :),
]));

        set("exits", ([ /* sizeof() == 2 */
        "east":"/open/prayer/room/tangi/tangi1-6",		//地牢
        "west":"/open/prayer/room/tangi/tangi1-2",		//右护法
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/jail-guard" : 1,		//地牢守卫
   		
]));
        set("no_fight", 0);
        create_door("east","地牢铁门", "west",DOOR_CLOSED);
  setup();
}
