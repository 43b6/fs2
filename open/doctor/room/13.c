#include <room.h>
inherit ROOM;
void create()
{
        set("short","��������");
        set("long",@LONG
���鷿��һ�ǣ����������ڸ�һλ���ӽ���ע�����������λ��
�ӿ��ܲ�С�ķ���һ��С�����ø������ĳ�������Ȼ�ɾͲ��ˣ���
�������ɲ��Ǻ���ġ�

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"12",            
        "northeast":__DIR__"10",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/doctor/npc/vice-chair" : 1,
   "/open/doctor/npc/trainee2" : 1,    

]));

  setup();
}


