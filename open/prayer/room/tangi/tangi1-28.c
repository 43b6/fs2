//open/prayer/room/tangi/tangi1-28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long","东边是副堂主的批改门内公文的工作房. 南边是走廊的尽头.\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/tangi/tangi1-23",		//走廊
	"south":"/open/prayer/room/tangi/tangi1-33",		//走廊
	"east":"/open/prayer/room/tangi/tangi1-47",		//副堂主办公室
       
        ]) );

  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="女性")
        return notify_fail("女人是无法进入副门主的办公房的 !\n");
        
   return 1;
}
