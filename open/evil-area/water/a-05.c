inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��������ȥ���ƺ���һ�����������ǣ����ߵ�·�Ѿ���ɳ�����
ס���޷�ͨ�С�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"a-06",
"west":__DIR__"a-04",
]));
	setup();
}

 