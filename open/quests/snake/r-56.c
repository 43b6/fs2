inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
������һ�������Ļ��ȣ���������һ���޴���ߵ������ڻ���
�У�ż�����������ӵĽ�̸�����������ƺ�����կ�����Ĳ�Զ�ˡ�
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"west":__DIR__"r-57",
"north":__DIR__"r-51",
]));
	setup();
}
