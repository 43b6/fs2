inherit ROOM;

void create()
{
	set("short","��կ ������");
	set("long",@LONG
������ǰ��һ���޴���ߵ����Σ�ʮ�ֵ��������ÿƬ����Ƭ
�����ü�ֵ��쳵�������ɵģ�������������Ѫ�����ĺ챦ʯ����
�ɵģ�������ѩƬ�װ�Ĵ���ʯ�������ݳ޵�һ���������Ρ�
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/liu_snake":1,
]));
	set("exits",([
"south":__DIR__"r-66",
"north":__DIR__"r-68",
]));
	setup();
}
