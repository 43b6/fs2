inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��Ʈ�����Ļ����˱ǣ����̲�ס���������У��������˼���أ�
�ƺ�Ҳֻ�����꽭�ϲ�����˵��࿹�⣬��⾰ɫ���������䣬ϸ��
��Ʈ����ʫ�续���㼸���Ѿ������Լ����ֲ���а����ˡ�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-16",
"north":__DIR__"a-14",
]));
	setup();
}

 