inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
��һ�Կ��Կ����������������ڷ�����һЩ������ɫ���޵���
�࣬һЩ���δ���������֣�ֱ��������ܹ��²⵽��Щ�߶����о�
�������ǲ�Ҫ���ĺá�
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":1,
]));
	set("exits",([
"east":__DIR__"r-46",
"west":__DIR__"r-54",
"south":__DIR__"r-52",
]));
	setup();
}
