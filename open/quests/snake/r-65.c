inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ �������");
	set("long",@LONG
ͨ���ϣ��������������Ķ��ߣ�������಻�ṥ���ˣ���ͨ��
��ȴ����������̾�����ʯ��ʯ���˶֮�������������ϵ�����
�����������Ŀ���������..�ƺ����������˼�������ʯ��..
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
__DIR__"npc/poison_soldier":2,
]));
	set("exits",([
"south":__DIR__"r-63",
"north":__DIR__"r-66",
]));
	setup();
}
