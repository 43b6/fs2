//open/prayer/room/kiyan/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

	��������һ�������Ӵ����֯������ͳ����Ϊ��ʥ��̡����ֳ�
	Ϊ���̣��˴�������ʥ�������֮һ�Ŀ����ţ������������ǿ�
	���ŵ���������������ʥ������е�����֧�ţ���������������
	�뷿.

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1",	//��������
        "south":__DIR__"7",	//����
        "east":__DIR__"3",	//�һ���
        "west":__DIR__"5",	//�󻤷�
 
        ]) );
        set("light_up", 1);
set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/kiyan" : 1,		//����
]));
  setup();
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
