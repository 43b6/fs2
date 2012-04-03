//open/prayer/room/tangi/tangi1-10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","石牢");
        set("long",
"天机门内部的石牢，主要都是禁锢一些犯了教规的门徒，当然也会有一些是属下自己
从外面抓回来可疑的奸细．这里正好有一位是从中原来的人士，因为被怀疑所以被
抓来这里 ．\n");
        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-9",		//地牢
        ]) );
       set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/criminal" : 1,		//人犯
]));

   setup();
}
