//open/prayer/room/uhen/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�����Ͽ��Լ������ϸ�ְλ����ͽ��һ������Ŀ����
	վ������Ⱥ���������������ڵ�ְ���Ա�������
	����ʱ�Ĵ�������ֵ����⣮

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"5",		//������
        "east":__DIR__"7",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/major-officer" : 1,		
]));

   setup();
}
