//open/prayer/room/tanchun/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�����Ͽ��Լ������ϸ�ְλ����ͽ��һ������Ŀ����վ������     
	���Ⱥ���������������ڵ�ְ���Ա�����������ʱ�Ĵ������  
	�ֵ����⡣

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"4",		//������
        "west":__DIR__"8",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		
]));

   setup();
}
