//open/prayer/room/westarea/road17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ���߿���ͨ��
	ʥ��̵���̳. ʥ��̵Ľ�������һ�������, ������˵����
	�������, ������ѧ���, �������Դ���ʥ���Ŀǰ��ӵ�е�
	�����ѧ.........
LONG);

       	set("outdoors", "/open/prayer");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road13",		//�ֵ�
	"south":__DIR__"road21",		//�ֵ�
	 
        ]) );
        setup();
}
