//open/prayer/room/tanchun/23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	��Ȩ���ܹܵ��鷿, �������ܹܴ�������ĵط�. �ܹܲ�ϲ����
	�Խ�����칫��, ���Ի�Ҫ�������ı���ȷʵִ�д�һ����..��
	���������ȵķ���.

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
