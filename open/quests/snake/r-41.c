inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ������");
	set("long",@LONG

		������ʼ�е����⣬�������ɺڰ� ��

LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/poison_soldier":3,
]));
	set("exits",([
"north":__DIR__"r-42",
"south":__DIR__"r-30",
]));
	setup();
}
