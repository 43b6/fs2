//open/prayer/room/tangi/tangi1-16.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",
"�˴�������ų�Ա������������ڣ�ȭʦ�Ǹ��������ʵ�ʶ������ڵ�����ѧ��
ָ����ÿ���¶�������Ե��ӵ�����״�����������森\n");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-13",		//������
        "west":"/open/prayer/room/tangi/tangi1-15",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/puncher" : 1,		//ȭʦ
]));

   setup();
}
