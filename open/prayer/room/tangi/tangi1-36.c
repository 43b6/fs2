//open/prayer/room/tangi/tangi1-36.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵĳ���,ȫ���������µĻ�ʳ��Ҫ������!!\n");

        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-29",		//����
	"south":"/open/prayer/room/tangi/tangi1-38",		//����
	"east":"/open/prayer/room/tangi/tangi1-37",		//����
        "west":"/open/prayer/room/tangi/tangi1-35",		//����
 
        ]) );
             set("light_up", 1);

  setup();
}
