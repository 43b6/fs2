//open/prayer/room/garden8.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �����԰�ô������������϶���ŨŨ��
	������������԰������һ��˵�����Ĺ�������
	��ʱ������Ұ��������������ʱ���ŵ�Ũ���
	Ѫ��ζ�����㲻��������

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden12",		//��԰
        "south":"/open/prayer/room/garden4",		//��԰
        "east":"/open/prayer/room/garden7",		// "
        "west":"/open/prayer/room/garden9",			// "
        ]) );
   setup();
}
