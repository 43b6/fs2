inherit ROOM;

void create()
{
	set("short","��կ");
	set("long",@LONG
���������һ��ľ�����������ӣ������ǹ���կ��������Ϣ��
�ط�����������һ��ʯ�Ƶ��ߵ񣬿���������������
LONG);
	set("exits",([
"east":__DIR__"r-03",
"north":__DIR__"r-11",
]));
	setup();
}
