// Room: /open/capital/room/inn2.c

inherit ROOM;

void create()
{
	set("short", "�շ���");
	set("long", @LONG
����һ��ʲôҲû�еĿշ��䡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"inn",
]));

	setup();
}
