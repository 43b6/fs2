inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ");
	set("long",@LONG
���������һ��ľ�����������ӣ������ǹ���կ��������Ϣ��
�ط������ϱ�����һ��ʯ�Ƶ��ߵ񣬿���������������
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":2,
]));
	set("exits",([
"east":__DIR__"r-04",
"south":__DIR__"r-10",
]));
	setup();
}
