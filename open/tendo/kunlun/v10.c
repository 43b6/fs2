// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ");
	set("long", @LONG
ƽ̹��ʯ�������������˽�Ϊ��᫵�ʯ��·����
�Ե���ľ����ϡ�٣���ǰ��ȥֻ����һ�����ѵ���
��С�����������۵�ͨ��ɽ����

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"v9",
	"north" : __DIR__"r1",
]));
	set("outdoors", "1");

	setup();
}
