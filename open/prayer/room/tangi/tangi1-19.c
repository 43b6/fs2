//open/prayer/room/tangi/tangi1-19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵ����ȣ������Ͽɼ��������������͵��Ĵ����������ȵ��ȶ���ʹ���ϵȵ�
������ľ����ģ���ʱ����ɢ�������е���ľ�㣮\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-24",		//����
	"east":"/open/prayer/room/tangi/tangi1-20",		//����
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/footman" : 1,		//����
   		
]));
     
  setup();
}
