inherit ROOM;

void create()
{
	set("short","��կ ����");
	set("long",@LONG
����۾�ɨ��������ǽ���ԵĹ��ӣ�������������������ҩ��
��һ�Է�����һЩ�̾�����̨�����滹�м���������Ƥ���ߣ������
�������ߣ������ϵ��䶯�ţ�������ʮ�ֵĶ��ġ�
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
]));
	set("exits",([
"west":__DIR__"r-47",
"south":__DIR__"r-49",
]));
	setup();
}
