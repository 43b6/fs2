//open/prayer/room/westarea/road35.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������������
	��, �ϱ��������乬. ���乬��Ʈ����ĸ��ֲ�֮һ. �й�ʥ
	��̵ľ�ѧ�����ķ�, ֻ��ȥ�ҽ����ʸ�������!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road32",	//�ֵ�
	"south":__DIR__"road40",	//�ֵ�
	"west":__DIR__"road36",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/man2" : 1,		
        ]) );
  setup();
}
