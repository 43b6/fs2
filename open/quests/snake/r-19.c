inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ������");
	set("long",@LONG
����һ�����С���ܱտռ䣬����Կ�����������һ�����͵�
���Σ��������˵����կկ�����������ƺ����Ե��е�С���������
�������Ļƽ����鱦�����������Ƿ��ñ���ĵط���
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/snake_soldier":3,
]));
	set("exits",([
"west":__DIR__"r-20",
"east":__DIR__"r-18",
"south":__DIR__"r-05",
"north":__DIR__"r-22",
]));
	setup();
}
