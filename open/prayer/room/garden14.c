//open/prayer/room/garden14.c
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
        "north":"/open/prayer/room/garden18",		//��԰
        "south":"/open/prayer/room/garden10",			// "
        "west":"/open/prayer/room/garden15",			// "
        ]) );
   setup();
}
