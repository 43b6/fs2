inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",YEL"ɳ ��"NOR);
	set("long",@LONG
һ������ë�Ĵ������վ���������ǰ�����ֳ���һ�����ɫ
�����ף����ϵĽ���������ǰ���Ǹ��������������������ȣ����ϵ�
����һ�������������ܵ���ζ������һ�߽����ڣ���ֻ��ë��ͣ����
���ϵĹ������������㡣
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"out":__DIR__"a-27",
]));
	set("objects",([
__DIR__"npc/sell":1,
]));
	setup();
}

 