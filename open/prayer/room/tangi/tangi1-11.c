//open/prayer/room/tangi/tangi1-11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",
"�˴�������ų�Ա������������ڣ�Ҳ��������������������ĵط��� ���Ĵ�СԼ��
�ٳ߼��������ܳ����ڻԻͣ���ͽ�������ﲻ�����ɼ�������ŵ���ͽ�ڶ࣬����\
��ʥ�����֮������һ��֧�ţ�\n");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-14",		//������
        "east":"/open/prayer/room/tangi/tangi1-12",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		//���ܹ�
]));

   setup();
}
