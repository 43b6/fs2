//open/prayer/room/tangi/tangi1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",@LONG

	��������һ�������Ӵ����֯, ����ͳ����Ϊ��ʥ��̡�
	, �ֳ�Ϊ����. �˴������̷ֲ�֮һ�������, ��������
	��������ŵ�����. �������ʥ�������֧�ţ�������
	����������鷿!!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-1",		//�����ķ���
        "south":"/open/prayer/room/tangi/tangi1-12",		//����
        "east":"/open/prayer/room/tangi/tangi1-2",		//�һ���
        "west":"/open/prayer/room/tangi/tangi1-3",		//�󻤷�
 
        ]) );
        set("light_up", 1);
	set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
	"/open/prayer/npc/tangi" : 1,		//����
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(me->query("class")!="prayer"&&dir=="north")
	return notify_fail("�Բ���, ����������ŵ��ӵľۻ�֮��!!\n");
                      
	return ::valid_leave(me,dir);
}

void init()
{
  add_action("do_pass","pass");
}

int do_pass()
{
   object me=this_player();
   me->move("/open/ping/room/road3");
   return 1;
}