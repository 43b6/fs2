//open/prayer/room/westarea/road18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ������ʥ���
	����֮һ--"�����". ������һλ������Ů��, ��һλ��ԭ��
	ʿ, ������˵�Ѿ������!!���ķ�������Ҳ��ʥ��̵�һλ��
	��......
LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road15",		//�ֵ�
	"south":__DIR__"road23",		//�ֵ�
	"west":"/open/prayer/room/tanshun/2-door",		//����
 
        ]) );
        
        setup();
}
