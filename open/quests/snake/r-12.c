inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ����");
	set("long",@LONG
ʯ�Ƶ���կ�Ե�ʮ�ֵļ�̣�����λ����կǰ�������Ͻǣ�����
��ȥ��������һ��ľ�����������ӣ���������ǹ���կ��������Ϣ
�ĵط���
LONG);
	set("objects",([
__DIR__"npc/snake_soldier_1":2,
]));
	set("exits",([
"east":__DIR__"r-13",
]));
	setup();
}
