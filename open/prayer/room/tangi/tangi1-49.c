//open/prayer/room/tangi/tangi1-49.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",
"����Ÿ������İ칫��.�����������ȵķ���,�ϱ��������������鷿. \n");

        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-50",		//��������
	"west":"/open/prayer/room/tangi/tangi1-46",		//��������
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
