//open/prayer/room/uhen/3.c

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
	������վ����������ŵ��һ�����

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"6",	//����
        "east":__DIR__"2",		//�鷿
        "west":__DIR__"4",		//����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/right" : 1,		//�һ���
]));
  setup();
}

