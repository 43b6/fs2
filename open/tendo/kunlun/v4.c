// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", @LONG
眼前有座道观，上头写着昆仑道观四字，是专
门教导人们入道修行的地方，如果你对于奇门遁甲
及养生之道有兴趣的话，你可以在此找到你所想要
的。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"v3",
	"south" : __DIR__"cloister",
]));
	set("outdoors", "1");

	setup();
}
