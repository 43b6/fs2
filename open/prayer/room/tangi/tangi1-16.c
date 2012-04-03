//open/prayer/room/tangi/tangi1-16.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",
"此处是天机门成员讨论问题的所在．拳师是负责教授与实际督导门内弟子武学的
指导，每个月都必须针对弟子的练功状况向门主报告．\n");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-13",		//议事厅
        "west":"/open/prayer/room/tangi/tangi1-15",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/puncher" : 1,		//拳师
]));

   setup();
}
