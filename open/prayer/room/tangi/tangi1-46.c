//open/prayer/room/tangi/tangi1-46.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",
"����Ÿ������İ칫��.�ϱ��������ȵķ���,�����������������鷿. \n");

        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-47",		//��������
	"east":"/open/prayer/room/tangi/tangi1-49",		//��������
       
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/puncher" : 1,		//ȭʦ
   		
]));
     
  setup();
}
