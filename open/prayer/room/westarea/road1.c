//open/prayer/room/westarea/road1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, �����߾���
	����ʥ��̵���̳���ڵ���. ·���Ե������֦, ���ҡҷ
	, ����һ�ֺ����ʵĸо� .
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":"/open/prayer/room/1-door2",		//�ֵ�
	"south":__DIR__"road9",	//�ֵ�
	"east":__DIR__"road2",	//�ֵ�
	"west":__DIR__"road3",	//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
    setup();
}

