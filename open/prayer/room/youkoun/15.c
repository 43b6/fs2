//open/prayer/room/youkoun/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        �������ܹܴ�������ĵط�. �ܹ������������븱����ͬ
        һְ�ȵĸɲ�..ר�Ÿ�����������Ĵ���. ����һֱ����
        �߿ɵ������䳡.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northeast":__DIR__"12",        //�ܹܷ�
        "southeast":__DIR__"14",        //�ܹܷ�
        "east":__DIR__"13",             //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-manager" : 1,         //�ܹ�
                
]));
     
  setup();
}
