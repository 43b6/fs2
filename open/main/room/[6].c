// Room: /open/main/room/[6].c

inherit ROOM;

void create()
{
	set("short", "�շ���");
	set("long", @LONG
����һ��ʲôҲû�еĿշ��䡣
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r41",
  "east" : __DIR__"r42",
]));

	setup();
}
