inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� ��"NOR);
	set("long",@LONG
�������԰ڷ���һ��ʯ����ʯ���԰ڷ���һЩСʯ�ʣ�ʯ���ϰ�
��һЩ�ع����ʻ�������һ�����ص����иУ�����Ȼ������Բ²⵽
������ʯ����������ʳ�õġ�
�������Ը���һ��ͨ����������ͨ����������ڡ�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-11",
"east":__DIR__"b-10",
"north":__DIR__"b-01",
]));
	setup();
}

 