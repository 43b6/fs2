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
__DIR__"npc/snake_soldier":1,
"/obj/money/cash":3,
]));
	set("exits",([
"east":__DIR__"r-05",
"north":__DIR__"r-20",
]));
	setup();
}
