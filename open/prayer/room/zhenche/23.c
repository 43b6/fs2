//open/prayer/room/zhenche/23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	�������ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ�
	�����������븱����ͬһְ�ȵĸɲ�..ר�Ÿ���������
	��Ĵ���. �����������ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"18",		//�ܹܷ�
        "south":__DIR__"28",		//�ܹܷ�
        "east":__DIR__"22",		//�ܹܷ�
        "west":__DIR__"24",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon2" : 1,		//����
   		
]));
     
  setup();
}
