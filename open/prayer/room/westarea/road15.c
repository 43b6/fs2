//open/prayer/room/westarea/road15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �����������
	��, �ϱ����������. ʥ��̵�����һ������ֻ, Ҳ�����׳�
	��[ʥ����]. ÿֻ�ĳ��̲�һ, ����������񶼿�����ѧ����
	��.....
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road10",	//�ֵ�
	"south":__DIR__"road18",	//�ֵ�
	"east":__DIR__"road14",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
