inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� �� ��"NOR);
	set("long",@LONG
������Ե�һ��С�յأ����ϻ����˺ܶ��Сͼ�Σ��о����ƺ�
��һ��С������������ˣ�ĵط���
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-17",
]));
	set("objects",([
__DIR__"npc/child":1,
]));
	setup();
}

 