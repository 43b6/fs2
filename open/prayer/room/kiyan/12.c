//open/prayer/room/kiyan/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	副门主正和弟子在闲话家常, 副门主的和蔼可亲由此可见一般!!
	门内的摆设除了几张桌椅之外, 也没有什么东西了..房内有许多
	的教内弟子在站岗, 可见副门主的地位也是非常的重要与高阶了
	!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"11",		//副门主室
	"northeast":__DIR__"9",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/vice-chair" : 1,		
   "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
