inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"HIG" ͬ �� �� "NOR);
	set("long",@LONG
����̤�ź�ʵ��ʯ�������������ϵ�Χ�����Ĵ���ȥ��ֻ����
��Ұ�൱�Ŀ���������΢�紵�����д��ŷḻ��ˮ������ֻ����һ��
���������Ҵ��������¾����ּ���������ó̡�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-23",
"south":__DIR__"a-25",
]));
	setup();
}

 