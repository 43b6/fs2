//open/prayer/room/uhen/5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",@LONG

        ���������ϳ��˷�Щ������. ǽ��Ҳ����һЩ��, ��
        �еľ�����Ҫ����һЩ��������շ����ͼ��. ����
        �����ƺ������ⷽ�����ر��ϲ��..
	������վ����������ŵ��󻤷���

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"8",		//����
        "east":__DIR__"4",	            	//����
        "west":__DIR__"23",	             	//������
 
        ]) );
        set("no_fight", 1);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/left" : 1,		//�󻤷�
]));
  setup();
}

int valid_leave(object me, string dir)
  {
  if(dir=="west" && me->query("class") != "prayer")
        return notify_fail("���ǽ�ͽ�ǲ��ܽ���� !\n");
        
	return ::valid_leave(me,dir);
}
