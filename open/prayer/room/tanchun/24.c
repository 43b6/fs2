//open/prayer/room/tanchun/24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	��Ȩ���ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ�������
	�����븱����ͬһְ�ȵĸɲ�..ר�Ÿ�����������Ĵ���. ��
	���������ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "eastsouth":__DIR__"28",	//�ܹܷ�
        "east":__DIR__"23",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/paltoon1" : 1,		//����
  "/open/prayer/npc/paltoon2" : 1,		//����
   		
]));
     
  setup();
}
