inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ �������");
	set("long",@LONG
����Ŀ���������ǰ�ĸ������ţ��������ζ���⣬���⻹����
��ʬ��ĸ���ζ�����ϳ�������������Ҳ�����Ķ���������䣬
������������һЩ������ʳ��Ϊʳ��������˴��۽硣

������һ��ͨ����կǰ���������ͨ����
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
__DIR__"npc/poison_soldier":2,
]));
	set("exits",([
"west":__DIR__"r-63",
"down":__DIR__"r-69",
]));
	setup();
}
