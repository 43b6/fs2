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
	"eastdown" : __DIR__"r1",
	"eastup" : __DIR__"r3",
]));
	set("outdoors", "1");

	setup();
}
