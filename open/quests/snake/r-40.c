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
__DIR__"npc/poison_man_2":1,
__DIR__"npc/poison_soldier":2,
]));
	set("exits",([
"east":__DIR__"r-39",
]));
	setup();
}
