//open/prayer/room/tanchun/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��Ȩ�Ŵ���");
        set("long",@LONG

	���������İ��費����Ǳ������������ر���������ǽ�ϵ�
	��һ��������ꪣ����������ɾ������ɣ����ѱ����������ٽ�
	��������������������Ϻ�, ʹ��������������ɿ�ʯ��������
	����վ��������Ȩ�ŵ��һ�����

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",		//����
        "west":__DIR__"2",		//����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right" : 1,		//�һ���
]));
  setup();
}

