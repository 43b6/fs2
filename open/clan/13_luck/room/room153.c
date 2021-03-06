inherit ROOM;
void create() {
	set( "short", "吉祥林道" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room152",
		"west"      : "/open/clan/13_luck/room/room154",
	]) );
	set( "long", @LONG

　　当你向前远望时，一座广大的森林就在不远前，被一大片白雾笼
照的森林，立即引起你的好奇心，想前往一探究竟，可是冒然前往是
极危险的事，因此向人四处打探，终于得知原来前方正是恶名昭彰的
雾之林，有进无出。

LONG);
	setup();
	replace_program(ROOM);
}
