//open/prayer/room/garden15.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

��֪������������Ũ��,ֻ����������,���ܲ�ʱ����Ұ�޵Ľ���........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden19",		//��԰
        "south":"/open/prayer/room/garden11",		//��԰
        "east":"/open/prayer/room/garden14",		// "
        "west":"/open/prayer/room/garden16",			// "
        ]) );
   setup();
}
