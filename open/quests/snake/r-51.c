inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
�����������������һֻʯ����ߣ������򲻶ϵĴ��������Ѫ
��ζ��ҩˮζ����������һ�����ȣ�ͨ����կ���㡣
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
]));
	set("exits",([
"east":__DIR__"r-50",
"west":__DIR__"r-52",
"south":__DIR__"r-56",
]));
	setup();
}
