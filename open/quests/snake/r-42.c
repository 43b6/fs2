inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ������");
	set("long",@LONG

		���������������⣬�������ɺڰ� ��

LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/poison_soldier":3,
]));
	set("exits",([
"south":__DIR__"r-41",
"north":__DIR__"r-43",
]));
	setup();
}
