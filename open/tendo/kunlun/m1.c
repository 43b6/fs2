// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
�������������Ұ���ع���������һ����ȥ
��������ʯ��׵�ɽ����ȴ��һ��ټ�����ɫɽ
�ȣ���ѩ����������������ƽ���ѵ�һ���Ļ���
ɽ��֮�л���һ����أ�����ƽ���޲�����ȴҲ
����������ʮ�����ء�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"r4",
	"east" : __DIR__"m2",
	"west" : __DIR__"m8",
	"north" : __DIR__"m6",
]));
	set("outdoors", "1");

	setup();
}
