//open/prayer/room/garden18.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

ʥ�����̳�Ļ�԰,�ߵ��˴���Ȼ�����Ĵ�а������,��������........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/garden14",		//��԰
        "west":"/open/prayer/room/garden19",		// "
        ]) );
   setup();
}
