//open/prayer/room/tangi/tangi1-13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",
"�����Ͽ��Լ������ϸ�ְλ����ͽ��һ������Ŀ����վ������Ⱥ�������������
���ڵ�ְ���Ա�����������ʱ�Ĵ�������ֵ����⣮��ͷ������û��ʲô����ɣ�
����һ�������ɵ����ӣ�\n");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-16",		//������
        "west":"/open/prayer/room/tangi/tangi1-12",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general" : 1,		//��ͷ
]));

   setup();
}
