//open/prayer/room/tangi/tangi1-51.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",
"����Ÿ������İ칫��.�����������ȵķ���,�����������������鷿. \n");

        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-50",		//��������
	"west":"/open/prayer/room/tangi/tangi1-48",		//��������
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
