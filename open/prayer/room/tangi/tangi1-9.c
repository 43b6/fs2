//open/prayer/room/tangi/tangi1-9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����ŵ���");
        set("long",@LONG
�˴������̷ֲ�֮һ��������ڲ��ĵ���. 
LONG);
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/tangi/tangi1-8",		//ʯ�η�
        "south":"/open/prayer/room/tangi/tangi1-10",		//ʯ�η�
        "west":"/open/prayer/room/tangi/tangi1-6",		//����
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/picket" : 1,		//����Ѳ��
]));
	
  setup();
}
