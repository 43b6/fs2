//__DIR__"12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	����Ÿ������İ칫��.һ������Ϳ��������������Եĵ���
        ����������ŵ���������.�ƺ��൱��æ¼. ����Ҫ��һ����
        ����Ҳ��Ҫ���൱�Ĳ��ܷ���.  

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"11",		//��������
	"northeast":__DIR__"9",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/vice-chair" : 1,		
        "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
