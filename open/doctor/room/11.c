#include <room.h>
inherit ROOM;
void create()
{
        set("short","��������");
        set("long",@LONG
������ÿ�칫�񶼺ܷ�æ������м�������ÿ�춼Ҫ����æ������
������ר�Ĺ��������Σ�����һ�㱧ԹҲû�У���ȫ�����ϼ���ָʾ��

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"12",          
        "southeast":__DIR__"10",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/doctor/npc/trainee2" : 1,            
   "/open/doctor/npc/trainee1" : 1,  

]));

  setup();
}

