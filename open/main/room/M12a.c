// Room: /open/main/room/M12a.c

inherit ROOM;

void create()
{
	set("short", "��ɽ����");
	set("long", @LONG
	�ⳤ�Ȳ�֪���ж೤��ߣ�������ɽ���ϣ�ֱ
	�������С�


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "eastup" : __DIR__"M13a",
  "westdown" : __DIR__"M11",
]));
	set("outdoors", "1");

	setup();
}
