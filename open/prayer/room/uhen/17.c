//__DIR__"17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	������ܹܵ��鷿, �ܹ������������븱����ͬһְ�ȵ�
        �ɲ�. ������������Ĵ���. �����ܹܲ�̫ϲ����������
        ��. �������ſ�����һ������������һЩ��������Ľ�����
LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"16",		//�ܹܷ�
        "south":__DIR__"18",		//�ܹܷ�
        "east":__DIR__"15",		//�ܹܷ�
        "west":__DIR__"19",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon2" : 1,		//����
   		
]));
     
  setup();
}
