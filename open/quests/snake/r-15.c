inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ����");
	set("long",@LONG
ʯ�Ƶ���կ�Ե�ʮ�ֵļ�̣�����λ����կǰ���Ķ��Ͻǣ�����
���ԣ���������һ��ľ�����������ӣ���������ǹ���կ��������
Ϣ�ĵط���
LONG);
	set("objects",([
__DIR__"npc/snake_soldier":1,
]));
	set("exits",([
"west":__DIR__"r-14",
"east":__DIR__"r-16",
"down":__DIR__"r-06",
]));
	setup();
}
