// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "望月楼");
	set("long", @LONG
这儿是客栈的第二层楼，可以从这清楚地看
到整个村庄的鸟瞰和南边清澈见底的河水，晚上
可以看到河上倒挂的弯月和渔船上点点的灯光。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"down"  : __DIR__"v12",
]));
	set("objects", ([ /* sizeof() == 2 */
          ]));

	set("light_up",1);
	set("outdoors", "0");

	setup();
}
