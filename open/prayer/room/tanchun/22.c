//open/prayer/room/tanchun/22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	��Ȩ���ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ���������
	���븱����ͬһְ�ȵĸɲ�..ר�Ÿ�����������Ĵ���. ������
	�����ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"28",	//�ܹܷ�
        "west":__DIR__"23",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,		//����
   		
]));
     
  setup();
}
