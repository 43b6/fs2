// Room: /open/soulin/room/s03.c

inherit ROOM;

void create()
{
	set("short", "少林寺前广场");
	set("long", @LONG
	一般少林寺弟子练功的地方，四周是一片空地。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"s02",
  "north" : __DIR__"s06",
]));
        set("objects", ([ /* sizeof() == 1 */
"/open/bonze/npc/l_monk":2,
]));
 set("outdoors", "/open/bonze");

	setup();
}
