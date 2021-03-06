inherit ROOM;
void create() {
	set( "short", "皇城大道" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/daemon/class/blademan/obj/gold-blade",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10001 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/hall.c",
		"east"      : "/open/clan/13_luck/room/room197.c",
		"north"     : "/open/clan/13_luck/room/room7.c",
		"west"      : "/open/clan/13_luck/room/room193",
	]) );
	set( "long", @LONG

    这里是十三吉祥的大本营--皇城，放眼望去尽是深宫穹楼，一股庄
严的气氛笼罩着整个皇城，使你望之却步，脚下石版上刻着面龙腾凤舞
之浮雕，乃十三吉祥花费无数人力所凿造而成，非帮中之人，一但踏入
皇城之中再难回头, 只有落的丧生残体之下场...

LONG);
	setup();
	replace_program(ROOM);
}
