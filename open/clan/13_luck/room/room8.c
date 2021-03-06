inherit ROOM;
void create() {
	set( "short", "皇城大道" );
	set( "object", ([
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10231 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room6.c",
		"north"     : "/open/clan/13_luck/room/room11",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    出了柳月泉，一条笔直的大道呈现在你眼前，乃通往十三吉祥禁地
--- 皇城之唯一通道，传说中凡进入皇城者, 从无完体而出之人，只因
皇城内满布十三吉祥之高手，各个都是满手鲜血的无情杀手，一但身入
皇城, 只有无尽的杀戮等着你...

LONG);
	setup();
	replace_program(ROOM);
}
