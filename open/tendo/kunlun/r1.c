// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��ɽ����");
	set("long", @LONG
�ⳤ�Ȳ�֪���ж೤��ߣ�������ɽ���ϣ�ֱ
�������С�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"v10",
	"westup" : __DIR__"r2",
]));
	set("outdoors", "1");

	setup();
}
