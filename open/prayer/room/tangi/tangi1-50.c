//open/prayer/room/tangi/tangi1-50.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",
"����Ÿ������İ칫��.�����������ȵķ���,�����������������鷿.\n" );

        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-49",		//��������
	"south":"/open/prayer/room/tangi/tangi1-51",		//��������
	"west":"/open/prayer/room/tangi/tangi1-47",		//��������
        "east":"/open/prayer/room/tangi/tangi1-52",		//�������鷿
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//����
   		
]));
     
  setup();
}
