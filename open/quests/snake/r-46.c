inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
����������կ���а�Σ������Ѿ�������կ���ģ�������һ����
�����ƺ�����ͨ����կ�ĵ����ң��������԰��������ı���������
���������С��һ����ǡ�
LONG);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"r-47",
"west":__DIR__"r-55",
"down":__DIR__"r-45",
]));
	setup();
}
