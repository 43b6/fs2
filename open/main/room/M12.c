// Room: /open/main/room/M12.c

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
  "westup" : __DIR__"M11",
  "eastdown" : __DIR__"m13",
]));
	set("outdoors", "1");

	setup();
}
