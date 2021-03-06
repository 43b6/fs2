inherit ROOM;
void create() {
	set( "short", "皇城大道" );
	set( "build", 10010 );
	set( "object", ([
		"file9"    : "/open/ping/obj/ring-2",
		"file3"    : "/daemon/class/blademan/obj/mhands",
		"amount2"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/soldier/obj/hit",
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/soldier/obj/snake",
		"file1"    : "/u/b/babe/cloud",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room7",
		"north"     : "/open/clan/13_luck/room/room8",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是十三吉祥的大本营--皇城，放眼望去尽是深宫穹楼，一股庄
严的气氛笼罩着整个皇城，使你望之却步，脚下石版上刻着面龙腾凤舞
之浮雕，乃十三吉祥花费无数人力所凿造而成，非帮中之人，一但踏入
皇城之中再难回头, 只有落的丧生残体之下场...

LONG);
	setup();
	replace_program(ROOM);
}
