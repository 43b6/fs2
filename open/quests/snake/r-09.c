inherit ROOM;

void create()
{
	set("short","��կ");
	set("long",@LONG
���������һ��ľ�����������ӣ������ǹ���կ��������Ϣ��
�ط������ϱ�����һ��ʯ�Ƶ��ߵ񣬿���������������
LONG);
	set("exits",([
"west":__DIR__"r-04",
"south":__DIR__"r-08",
]));
	setup();
}
