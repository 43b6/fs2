#include <room.h>
inherit ROOM;
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG
���ܹܵ��鷿���ԣ�վ�ż�λ�������Ƕ������ܹ�����������
�����о�����ѡ�����ģ����𱣻��ܹܵİ�ȫ���Լ������ܹ��鷿��
����Ҫ��Ʒ��

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"28",        
        "west":__DIR__"23",           

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/paltoon" : 1,         

]));

  setup();
}


