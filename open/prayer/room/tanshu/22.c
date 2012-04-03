// Room: /open/prayer/room/tanshu/22.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG

    「喝～喝～！”天枢的弟子正练习对打，如果你自认功夫到家，
    可以考虑看看下去插一脚，不过要记得打死人可不偿命哦！

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"12.c",
  "north" : __DIR__"14.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	}
