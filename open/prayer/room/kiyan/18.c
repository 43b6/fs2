//open/prayer/room/kiyan/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	�������ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ�����������
	�븱����ͬһְ�ȵĸɲ�..ר�Ÿ�����������Ĵ���. ����������
	�ȵķ���. ���������ܹܵ����ڵ�. 

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "northwest":__DIR__"19",		//�ܹܷ�
        "north":__DIR__"17",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,		//����
   		
]));
     
  setup();
}
