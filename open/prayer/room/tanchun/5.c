//open/prayer/room/tanchun/5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�����Ͽ��Լ������ϸ�ְλ����ͽ��һ������Ŀ����վ����
	��Ⱥ���������������ڵ�ְ���Ա�����������ʱ�Ĵ���
	�����ֵ����⣮

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",		//������
        "south":__DIR__"8",		//������
        "east":__DIR__"4",		//������
        "west":__DIR__"6",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
   setup();
}
