inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��������������ȥ�����ƺ�������һ����������Ư���ں����ϣ�
������ʮ�ֵ�����ˮ�������������������ֹ������ô�������ڴ�δ
֪���ĺ��������������л��ʲô���ﶼ�����ã�����С�ĵ�á�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-22",
"south":__DIR__"a-20",
]));
	setup();
}

 