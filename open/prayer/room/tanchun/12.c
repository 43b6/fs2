//open/prayer/room/tanchun/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	��Ȩ�Ÿ������İ칫��. �����������ȵķ���, �ϱ�����������
	���鷿. ������λվ�ڵĵ�����˵��Ц��, ����ʥ���һ����һ
	���ܲ������֯��.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"11",		//��������
	"south":__DIR__"13",		//��������
	"west":__DIR__"14",		//����
        "east":__DIR__"10",		//��������
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,		//����
   "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
