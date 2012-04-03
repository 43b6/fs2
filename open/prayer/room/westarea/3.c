//open/prayer/room/westarea/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","攀霞岭");
        set("long",@LONG

	曼丽山上的一座小山岭, 眼前所见是一些简朴的茅
	屋, 还有些牲畜在四处乱飞乱跑!!霞云满布, 好一
	股世外桃源之气息!!这位便是隐世高人的首徒, 他
	正在练功哩!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "east":__DIR__"2",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/high-man1" : 1,		
        ]));
  setup();
}
