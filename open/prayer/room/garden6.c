//open/prayer/room/garden6.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	а��������Ũ,���ܲ�ʱ����Ұ�޵Ľ���........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden10",		//��԰
        "east":"/open/prayer/room/garden2",			// "
        "west":"/open/prayer/room/garden7",		// "
        ]) );
   setup();
}
