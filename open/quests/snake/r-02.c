inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ");
	set( "build", 12 );
	set("long",@LONG
��կ����ʯͷ�����ƶ��ɵģ�����Ķ������ԣ�����һ�����ϵ�
ͨ������������Ҳ��һ��ʯ�Ƶ������񣬿�����ʮ�ֵı��棬������
��ı����ƺ�Ҳ����һ����...
LONG);
	set("objects",([
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"out":__DIR__"r-01",
"west":__DIR__"r-07",
"east":__DIR__"r-06",
"north":__DIR__"r-03",
]));
	setup();
}
