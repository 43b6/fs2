// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "世外桃源");
	set("long", @LONG

眼前所见尽是一片的缤纷景象，各种不知名的鲜
花绽放出五彩的颜色，令人恍惚是到了世外桃源
不远的前方有一座雅致的草屋...

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" : "/open/dancer/room/yuaroom2",
]));
	set("outdoors", "1");

	setup();
}
