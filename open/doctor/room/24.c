#include <room.h>
inherit ROOM;
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG
��Ϊ�ܹܲ�ϲ�����Խ��������鷿����������ѡ�ı���Ҳ����Ů��
�������ɱ�С������ร������������һ��Ҳ���������ม�

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"28",       
        "east":__DIR__"23",         

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/paltoon" : 2,                        

]));

  setup();
}


