inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ");
	set("long",@LONG
���������һ��ľ�����������ӣ������ǹ���կ��������Ϣ��
�ط�����������һ��ʯ�Ƶ��ߵ񣬿���������������
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":2,
]));
	set("exits",([
"west":__DIR__"r-03",
"north":__DIR__"r-09",
]));
	setup();
}
