// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
��ǰ�������ۣ���ͷд�����ص������֣���ר
�Ž̵�����������еĵط��������������Ŷݼ�
������֮������Ȥ�Ļ���������ڴ��ҵ�������Ҫ
�ġ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"v3",
	"south" : __DIR__"cloister",
]));
	set("outdoors", "1");

	setup();
}
