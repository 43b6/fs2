//open/prayer/room/zhenche/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        ���鷿��һ��, ���������ڸ�һλ���ӽ���ע������! ��
        ����λ���ӿ��ܲ�С�ķ���һ��С��. ���ø������ĳ���
        ��, ��Ȼ�ɾͲ���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"12",            //��������
        "northeast":__DIR__"10",                
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/vice-chair" : 1,           
   "/open/prayer/npc/trainee3" : 1,             //����
                
]));
     
  setup();
}
