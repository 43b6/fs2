//open/prayer/room/garden16.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	  ���ߵ������ǰ�ƺ���Ƭ�����Ĵ���ɢ��
	��֪������ô����������ھ���Կ�������
	����........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden20",		//��԰
        "south":"/open/prayer/room/garden12",		//��԰
        "east":"/open/prayer/room/garden15",		// "
        "west":"/open/prayer/room/garden17",		// "
        ]) );
   setup();
}
