//open/prayer/room/tanchun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��Ȩ�Ŵ���");
        set("long",@LONG

	����֮���ܶ��Ƿ��������ļ��ӣ��������������˱�����ɢ����
	���Ľ���ζ��������һ�����͵�ͼ�����������Ļ���������վ
	��������Ȩ�ŵ��󻤷���!!

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"1",		//����
        "south":__DIR__"6",	            
        "west":__DIR__"29", 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/left" : 1,		//�󻤷�
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(me->query("class")!="prayer"&&dir=="west")
	return notify_fail("�Բ���, ��������Ȩ�ŵ��ӵ�����֮��!!\n");
                      
	return ::valid_leave(me,dir);
}
