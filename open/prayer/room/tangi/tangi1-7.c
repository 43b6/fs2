//open/prayer/room/tangi/tangi1-7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","ʯ��");
        set("long",@LONG
�˴������̷ֲ�֮һ��������ڲ���ʯ��. 
LONG);
        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-6",		//����
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/picket" : 1,		//����Ѳ��
]));

   setup();
}
