//open/prayer/room/tangi/tangi1-48.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",
"����Ÿ������İ칫��.�����������ȵķ���,�����������������鷿. \n");

        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-47",		//��������
	"east":"/open/prayer/room/tangi/tangi1-51",		//��������
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//����
   		
]));
     
  setup();
}
