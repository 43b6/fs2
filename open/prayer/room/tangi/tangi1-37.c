//open/prayer/room/tangi/tangi1-37.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"�˴������̷ֲ�֮һ������ŵĳ���,ש��Ĵ����ǻ������ĳ���. \n");

        set("exits", ([ /* sizeof() == 1 */
        "west":"/open/prayer/room/tangi/tangi1-36",		//����
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/stoker" : 1,		//���
   		
]));
     
  setup();
}
