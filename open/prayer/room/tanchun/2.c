//open/prayer/room/tanchun/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��Ȩ�Ŵ���");
        set("long",@LONG

	��������һ�������Ӵ����֯, ����ͳ����Ϊ��ʥ��̡�, �ֳ�
	Ϊ����. �˴�������ʥ�������֮һ����Ȩ��, ��������������
	Ȩ�ŵ�����--˾ͽ��. ��Ȩ����ʥ������е�����֧�ţ�

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"30",		//������
        "south":__DIR__"5",		//����
        "east":__DIR__"1",		//�һ���
        "west":__DIR__"3",		//�󻤷�
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/tanchun" : 1,		//����
]));
  setup();
}

int valid_leave(object me, string dir)
{
    if(dir=="north" && !me->query("can_study",1) )
        return notify_fail("��������˽�˵�������!!��������!!\n");
        
   return 1;
}

