//open/prayer/room/tanchun/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	��Ȩ�Ÿ������İ칫��. �����������ȵķ���, ����ĵ����Ǹ�
	���������. һ��������������˶�����, �ɴ˿ɼ�ʥ��̶�
	�ڸ߼��ĸɲ����ж�ô��������. 

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",		//��������
	"southwest":__DIR__"13",		//��������
	"west":__DIR__"12",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
