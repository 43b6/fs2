//open/prayer/room/tangi/tangi1-20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵ����ȣ������Ͽɼ��������������͵��Ĵ����������ȵ��ȶ���ʹ���ϵȵ�
������ľ����ģ���ʱ����ɢ�������е���ľ�㣮���ܽ�ͷ���ڶ�������������.\n");

        set("outdoors", "/u/r/rence");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/tangi/tangi1-25",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-21",		//����
        "west":"/open/prayer/room/tangi/tangi1-19",		//����
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//���ܽ�ͷ
   		
]));
                
  setup();
}
