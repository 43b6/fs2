//open/prayer/room/garden13.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

Ѫ��ɫ��Ũ��Ʈ��,�������й���ζ!!���˵���ʶ����ģ��....... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden17",		//��԰
        "south":"/open/prayer/room/garden9",			// "
        "east":"/open/prayer/room/garden12",			// "
        ]) );
   setup();
}
