inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
��������ש���̵صĵ�·�ϣ����Ը�ʽһ������������������
��һ��ľ�Ƶķ��ݣ�����ԼԼ�У����������һЩ��Թ�Ŀ���������
���Ǵ�ľ���ڴ������ģ�������ͨ�������ڡ�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-18",
"south":__DIR__"b-24",
"east":__DIR__"b-22",
"west":__DIR__"b-20",
]));
	setup();
}

 