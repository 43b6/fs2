inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
����Կ��������ԣ������ż�ֻ�˼����b��һ�ֻᲶ�����
����û�뵽��Ȼ�ڴ˵�Ҳ���Կ�����˵�����㲻���п��������
�������һ������ĵط�����
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-09",
"west":__DIR__"a-07",
]));
	setup();
}

 