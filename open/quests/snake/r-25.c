inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ������");
	set("long",@LONG

		����һƬ��ڣ�ʲôҲ������ ��

LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/poison_soldier":1,
]));
	set("exits",([
"north":__DIR__"r-26",
"west":__DIR__"r-24",
]));
	setup();
}
