// Room: /open/main/room/M11.c

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
  "eastup" : __DIR__"M12a",
  "eastdown" : __DIR__"M12",
]));
	set("outdoors", "1");

	setup();
}
