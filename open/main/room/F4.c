// Room: /open/main/room/F4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ���޼ʵ����֣���������ֻ����ָ, �����ƺ���΢͸��������
�Ǳߵ���Ӧ�ñȽ���һЩ��? �ϱ߸߸�������һ����ɽ, ɽ����֪���ƻ�
��ѩ, һƬ��ãã, �����ѵ�����ɽ?
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f4",
  "north" : __DIR__"F1",
  "east" : __DIR__"F5",
]));

	setup();
}
