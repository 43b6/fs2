//open/prayer/room/garden21.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    ������԰�����޵�ȷ�Ƿǳ��Ĺ��죬����
	�������������ץ������������??�ѵ�������
	��ʲô������ܵ�����??

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/garden17",		//��԰
        "east":"/open/prayer/room/garden20",		// "
        ]) );

   setup();
}
