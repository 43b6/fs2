//open/prayer/room/westarea/road9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ��������������
	���м�, �����������������Ʒ!!����������������������
	�����!!�����ǿ�Ҫ��������������........
    ����, �����������վ��
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road1",		//�ֵ�
	"south":__DIR__"road13",	//�ֵ�
	"west":__DIR__"sushop",		//�̵�
    "east" : "/open/trans/room/room6", //��վ
 
        ]) );
        setup();
}
