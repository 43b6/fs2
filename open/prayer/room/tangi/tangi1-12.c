//open/prayer/room/tangi/tangi1-12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",
"�˴�������ų�Ա������������ڣ�Ҳ��������������������ĵط��� ���Ĵ�С
Լ�аٳ߼��������ܳ����ڻԻͣ���ͽ�������ﲻ�����ɼ�������ŵ���ͽ�ڶ�
������\��ʥ�����֮������һ��֧�ţ�\n");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1",			//����
        "south":"/open/prayer/room/tangi/tangi1-15",		//������
        "east":"/open/prayer/room/tangi/tangi1-13",		//������
        "west":"/open/prayer/room/tangi/tangi1-11",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/servant" : 1,		//С����
]));

   setup();
}
