inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ����");
	set("long",@LONG
ʯ�Ƶ���կ�Ե�ʮ�ֵļ�̣�����λ����կǰ�����������ԣ���
�Է�����һ��ľ�����������ӣ���������ǹ���կ��������Ϣ�ĵ�
����
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":3,
]));
	set("exits",([
"west":__DIR__"r-13",
"east":__DIR__"r-15",
]));
	setup();
}
