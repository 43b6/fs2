//open/prayer/room/tangi/tangi1-17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵ�����, �������ȥ��������ŵ�������(open door). ������������ŵ�����
��,���䳡�ϵ�����������ǿ��ĵ���.\n");
	set("outdoors", "/open/prayer/room"); 
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-15",		//������
        "south":"/open/prayer/room/tangi/tangi1-21",		//���䳡
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/duty" : 2,		//ֵ�����
   		
]));
        set("light_up", 1);
create_door("north","ʥ�����ľ����", "south",DOOR_CLOSED);
  setup();
}
