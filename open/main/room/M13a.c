// Room: /open/main/room/M13a.c

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
  "eastup" : __DIR__"M14a",
  "westdown" : __DIR__"M12a",
]));
	set("outdoors", "1");

	setup();
}
