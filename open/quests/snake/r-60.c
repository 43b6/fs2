inherit ROOM;

void create()
{
	set("short","��կ �������");
	set("long",@LONG
���Ȳ��ϵ����죬�����볱ʪ����ζҲ�����ؼ��أ�һ�����ζ
ʹ���̲�ס�ؓ�ס���ӣ����Ե�ʯ����ʹ����ֻ������Ψһ��ͨ����
�ߣ������ε�ҡ��ҡͷ��ֻ�����ű��Ӽ�����·��
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"south":__DIR__"r-59",
"west":__DIR__"r-61",
]));
	setup();
}
