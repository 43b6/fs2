//open/prayer/room/tanchun/28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	��Ȩ���ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ���
	��������ѡ������, ר�Ÿ�����������Ĵ���. ��������
	���ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"24",	//�ܹܷ�
        "northeast":__DIR__"22",	//�ܹܷ�
        "north":__DIR__"23",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-manager" : 1,		//�ܹ�
   		
]));
     
  setup();
}
