//open/prayer/room/tanchun/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	������վ�������ϸ�ְλ����ͽ������һ�����������ص�����
	���Ⱥ���������������ڵ�ְ���Ա�����������ʱ�Ĵ������
	�ֵ����⣮

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"6",		//������
        "east":__DIR__"8",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		
]));

   setup();
}
