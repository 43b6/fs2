// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
ټ�����ɫɽ�ȣ������ѩ���������ϻ���
��һ�㱡����ѩ��������˻��ǳ��˲��ٵĻ���
���㵽������˵���������ҵ�һЩ����ҩ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m6",
	"south" : __DIR__"m8",
]));
	set("outdoors", "1");

	setup();
}
