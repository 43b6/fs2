//open/prayer/room/tangi/tangi1-14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",
"���ܽ�ͷ��Ŀ����վ������Ⱥ���������������ڵ�ְ�𣬿���üͷ��������
�����ڵı������������ˣ��ϴδ̿�Ǳ����¼������ڻ�û�н�����ѹ�������
����!\n");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-11",		//������
        "east":"/open/prayer/room/tangi/tangi1-15",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);  
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//���ܽ�ͷ
]));

   setup();
}
