inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
������վһ��ש�����ɵ�С�����ϣ�������ȥ����һ��ľ�Ƶķ�
�ݣ�����Ӧ�þ��Ǻ��᷿�ˣ���ͨ�����ݵ�;�У���һ��յأ��յ�
�����������һ�ô��������������ǻص�������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-17",
"south":__DIR__"b-21",
"east":__DIR__"b-27",
"west":__DIR__"b-19",
]));
	setup();
}

 