//open/prayer/room/garden20.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �����԰�Ĵ������������϶���ŨŨ��
	������������԰������һ��˵�����Ĺ�������
	��ʱ������Ұ��������������ʱ���ŵ�Ũ���
	Ѫ��ζ�����㲻��������

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/garden16",		//��԰
        "east":"/open/prayer/room/garden19",		// "
        "west":"/open/prayer/room/garden21",			// "
        ]) );
   setup();
}
