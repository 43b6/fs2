//open/prayer/room/uhen/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",@LONG

	��������һ�������Ӵ����֯, ����ͳ����Ϊ��ʥ��̡�
	, �ֳ�Ϊ����. �˴������̷ֲ�֮һ�������, ��������
	��������ŵ�����. �������ʥ������е����֧�ţ�

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1",	//��������
        "south":__DIR__"7",	//����
        "east":__DIR__"3",		//�һ���
        "west":__DIR__"5",		//�󻤷�
 
        ]) );
        set("light_up", 1);
        set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/uhen" : 1,		//����
]));
  setup();
}
