inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ");
	set("long",@LONG
��������������һ���ߵ�ʯ���񣬵��������ƺ��п���һЩ����
�����ƺ������������������֣��������԰ڷ����������Σ�����
�����ƺ��Ǵ�������Ϣ�ҡ�
LONG);
	set("objects",([
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"west":__DIR__"r-09",
"east":__DIR__"r-08",
"north":__DIR__"r-04",
"south":__DIR__"r-02",
]));
	setup();
}
