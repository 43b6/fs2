//open/prayer/room/garden9.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	ʥ�����̳�Ļ�԰,�ߵ��˴���Ȼ�����Ĵ�а������,��������...... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden13",		//��԰
        "south":"/open/prayer/room/garden5",			// "
        "east":"/open/prayer/room/garden8",			// "
        ]) );
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/gardener" : 1,
        ]) );
   setup();
}
