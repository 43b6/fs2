//open/prayer/room/kiyan/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	�������ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹ���������
	���븱����ͬһְ�ȵĸɲ�..ר�Ÿ�����������Ĵ���. ������
	�����ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"19",		//�ܹܷ�
        "south":__DIR__"17",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/paltoon1" : 1,		//����
  "/open/prayer/npc/paltoon2" : 1,		//����
   		
]));
     
  setup();
}
