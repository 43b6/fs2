// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
ټ�����ɫɽ�ȣ������ѩ���������ϻ���
һ�㱡����ѩ��������˻��ǳ��˲���ƽ���ѵ�
һ���Ļ��ݣ��㵽������˵���������ҵ�һЩ��
���ҩ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m1",
	"north" : __DIR__"m7",
	"west" : __DIR__"c0",
]));
	set("outdoors", "1");

	setup();
}
