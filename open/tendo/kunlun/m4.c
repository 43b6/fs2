// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
������������֪���ؾ���������ů���ں���
��Χ��ȫ��������ѩ����ľҲ�ָ�������ɫ��
����ˮҲ���������������һ����Ȼ�����µģ�
�������ѩ���о�������˵ĺ��������˲��벻
͸��

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"m5",
	"south" : __DIR__"m3",
]));
	set("outdoors", "1");

	setup();
}
