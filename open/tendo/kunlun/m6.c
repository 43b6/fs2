// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	 set("short", "����ɽ���");
	set("long", @LONG
ټ�����ɫɽ�ȣ������ѩ���������ϻ���
һ�㱡����ѩ��������˻��ǳ��˲���ƽ���ѵ�
һ���Ļ��ݣ��㵽������˵���������ҵ�һЩ��
���ҩ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"m7",
	"north" : __DIR__"m5",
	"south" : __DIR__"m1",
	"east" : __DIR__"m3",
]));
	set("outdoors", "1");

	setup();
}
