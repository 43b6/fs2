//open/prayer/room/kiyan/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	�����Ÿ������İ칫���������������ȵķ������ϱ�
	�Ǹ��������鷿. 

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"10",		//��������
	"southwest":__DIR__"12",		//��������
	"west":__DIR__"11",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
