//open/prayer/room/zhenche/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        ������ÿ�칫�񶼺ܷ�æ, ����м�������ÿ�춼Ҫ��
        ��æ. ����������ר�Ĺ���������, ����һ�㱧ԹҲû
        ��. ��ȫ�����ϼ���ָʾ!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"12",            //��������
        "southeast":__DIR__"10",                
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee2" : 1,             //����
   "/open/prayer/npc/trainee3" : 1,             //����
                
]));
     
  setup();
}
