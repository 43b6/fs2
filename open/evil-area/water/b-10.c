inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� ��"NOR);
	set("long",@LONG
����һ����ͨ�����᷿��һ��ת�Ǵ�������ͨ������������ͨ��
���᷿��
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-09",
"south":__DIR__"b-12",
]));
	setup();
}

 