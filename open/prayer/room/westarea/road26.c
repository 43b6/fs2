//open/prayer/room/rwestarea/road26.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ������ʥ��
	�����µķֲ�֮һ--"�����". ���������λ������������
	������, ��ı���, ����Ǭ����Ų�Ƶ������Ѿ��ﵽ����, 
	�����Ṧ����һ��......
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road23",		//�ֵ�
	"south":__DIR__"road31",		//�ֵ�
      "west":"/open/prayer/room/uhen/2-door",         //����
 
        ]) );
        setup();
}
