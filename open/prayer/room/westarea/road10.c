//open/prayer/room/westarea/road10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ������ʥ��
	���������ķֲ�--"�����". ��˵����ŵ�����˾�����
	����ʱ�����ȹ�������������!!�ϱ��뱱�߸�������������
	�ֵ�.
LONG);

       	set("outdoors", "/open/prayer/room");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road5",		//�ֵ�
	"south":__DIR__"road15",	//�ֵ�
	"west":"/open/prayer/room/tangi/tangi1-34",		//����
 
        ]) );
        setup();
}
