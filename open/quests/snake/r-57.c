inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
������һ�������Ļ��ȣ������ڻ����У�ż�����������ӵĽ�̸
�����������ƺ�����կ�����Ĳ�Զ�ˡ�
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":3,
]));
	set("exits",([
"east":__DIR__"r-56",
"up":__DIR__"r-58",
]));
	setup();
}
