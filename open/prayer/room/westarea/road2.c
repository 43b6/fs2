//open/prayer/room/westarea/road2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ���ߵ�Сɽ
	������̳�����ڵ�, ���߲��, ���������ҫ��, ��������
	����һ����ɫ�Ļ�ɽ........
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road4",		//�ֵ�
        "west":__DIR__"road1",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
