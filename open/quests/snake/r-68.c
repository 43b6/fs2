inherit ROOM;

void create()
{
	set("short","��կ ������");
	set("long",@LONG
����Ҳ��һ������ʯ������Σ����ǳ�������һ����Ƥ���⣬��
��ƽ������������û������
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/master_snake":1,
]));
	set("exits",([
"south":__DIR__"r-67",
]));
	setup();
}
