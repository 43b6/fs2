//open/prayer/room/tangi/tangi1-26.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"���䳡�ϵĵ���һ��������ĥ���Լ������ܣ�ֻϣ���ܹ���һ��߱���ϰ�����
�������ʸ�!!\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-21",		//���䳡
	"south":"/open/prayer/room/tangi/tangi1-31",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-27",		//���䳡
        "west":"/open/prayer/room/tangi/tangi1-25",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
