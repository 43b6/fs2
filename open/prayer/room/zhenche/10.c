//open/prayer/zhenche/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        �����Ǹ��������鷿, �鷿�ڴ��ż���, ����ϵ�
        ��Ӧ�о���! ��һλ����������������������. 
        ����������ͨ�����ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",                //��������
        "southwest":__DIR__"13",                //��������
        "west":__DIR__"12",             
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,              //����
                
]));
     
  setup();
}
