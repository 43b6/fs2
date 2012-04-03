// Room: /open/main/room/F5.c

inherit ROOM;

void create()
{
	set("short", "密林");
	set("long", @LONG
这里一望无际的密林，四周伸手只见四指, 可见其黑的程度。南边有一条小路
往山间行去,似乎通往蜀山.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : "open/gsword/room/su-main",
  "north" : __DIR__"F2",
  "west" : __DIR__"F4",
  "east" : __DIR__"F6",
]));

	setup();
}
