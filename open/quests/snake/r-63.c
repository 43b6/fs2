inherit ROOM;

void create()
{
	set("short","��կ �������");
	set("long",@LONG
��Ȼ���Ǻ�������������ȷ��������һ�����Ŵ���Ƥ�����Σ�
�ƺ�����կկ�������Σ�����Ҫͨ����·�ϣ��ƺ������ĸ�������
�ȴ�������Ͷ��������
LONG);
	set("objects",([
__DIR__"npc/crazy_snake":1,
__DIR__"npc/poison_soldier":1,
__DIR__"npc/snake_soldier":1,
]));
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"r-64",
"west":__DIR__"r-62",
"north":__DIR__"r-65",
]));
	setup();
}
