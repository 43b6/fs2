#include <room.h>
inherit ROOM;
void create()
{
        set("short","��������");
        set("long",@LONG
�����Ǹ��������鷿���鷿�ڴ��ż���������ϵ���Ӧ�о��У�
��һλ������������������������

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",                
        "southwest":__DIR__"13",       
        "west":__DIR__"12",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/trainee1" : 1,     

]));

  setup();
}


