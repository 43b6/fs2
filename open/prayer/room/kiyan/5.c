//open/prayer/room/kiyan/5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

	����������������ԭ�˼ҵķ���뾰�����ر���һ��
	������ʥ���������ɵ���Ϣ��ǽ�Ͽɼ��������Ӣ��
	����Ļ��񣬳�ֳ��г������ĳ��ż������������
	վ�����ǿ����ŵ��󻤷��������������������!!

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"8",		//����
        "east":__DIR__"4",	        //����
        "west":__DIR__"23",	        //������
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/left" : 1,		//�󻤷�
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(me->query("class")!="prayer"&&dir=="west")
	return notify_fail("�Բ���, �����ǿ����ŵ��ӵ�����֮��!!\n");
                      
	return ::valid_leave(me,dir);
}
