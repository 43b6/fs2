inherit ROOM;
void create() {
	set( "short", "吉祥置物柜己" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"file4"    : "/open/gsword/obj/ring-1",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/gsword/obj/ring-1",
		"file9"    : "/open/love/obj/cloth1",
		"file6"    : "/open/love/obj/cloth1",
		"file7"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/love/obj/cloth1",
		"file5"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/gsword/obj/ring-1",
		"amount7"  : 1,
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room306",
	]) );
	set( "long", @LONG

    这里是[0;1;33m□[1mN[1m□[1m□[1m□[1mm[1m□[1m□[1m□[1md[1m□[1mv[0m，专门为还没有房间的新进帮众所设立的，此
环境优雅舒适，让新进的帮众有个可以去的地方跟休息的地方，使他们
快点成为十三吉祥的战力，一起为帮派的未来而努力，一同打拼，万里
风云骐意骥足，百年珠树凤凰枝，希望能为天下第一大帮而迈进。

LONG);
	setup();
	replace_program(ROOM);
}
