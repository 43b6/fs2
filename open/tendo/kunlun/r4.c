// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
�ⳤ�Ȳ�֪���ж೤��ߣ�������ɽ���ϣ�ֱ
�������С�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"westdown" : __DIR__"r3",
	"north" : __DIR__"m1",
]));
	set("outdoors", "1");

	setup();
}
