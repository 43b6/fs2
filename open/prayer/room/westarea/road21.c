//open/prayer/room/westarea/road21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �˴�������
	������, �������߿��Ե���ʥ��̵���̳. �ķ���ֱ���ʥ
	������Ÿ��ŵ�����λ��..
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"road17",	//�ֵ�
	"south":__DIR__"road25",	//�ֵ�
	"east":__DIR__"road20",		//�ֵ�
	"west":__DIR__"road22",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
