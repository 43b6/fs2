//open/prayer/room/garden11.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �����԰�Ĵ���������������������Ũ
	Ũ��������������԰������һ��˵�����Ĺ���
	���գ�ʱ������Ұ��������������ʱ���ŵ�Ũ
	���Ѫ��ζ�����㲻��������

LONG);
        set("outdoors", "/u/r/rence");
	set("objects", ([ /* sizeof() == 1 */
	"/open/prayer/npc/maker" : 1,  
	]));
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden15",		//��԰
        "south":"/open/prayer/room/garden7",		//��԰
        "east":"/open/prayer/room/garden10",		// "
        "west":"/open/prayer/room/garden12",		// "
        ]) );
   setup();
}
