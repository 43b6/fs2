inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� ��"NOR);
	set("long",@LONG
һ����ľ����������Ե�ͨ�����о���ʮ�ֵ���խ��ڣ�����ͨ
������������ͨ�����᷿��
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-16",
"east":__DIR__"b-14",
]));
	setup();
}

 