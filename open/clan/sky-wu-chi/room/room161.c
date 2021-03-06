inherit ROOM;
void create() {
	set( "short", "天涯海阁" );
	set( "owner", "bor" );
	set( "light_up", 1 );
	set( "build", 10160 );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_hands",
		"amount9"  : 1,
		"file2"    : "/open/magic-manor/water/obj/water-ribbon",
		"amount7"  : 1,
		"amount2"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/daemon/class/fighter/figring",
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/u/c/cgy/boots1",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/firedancer/npc/eq/r_pants",
		"file9"    : "/open/firedancer/npc/eq/r_boots",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room315.c",
		"north"     : "/open/clan/sky-wu-chi/room/room217",
	]) );
	set( "long", @LONG
这里是一代舞者----$MAG$梦魂残星$NOR$----隐居避世的地方。当经过
了重重的考验之后，梦魂残星深深感到江湖险恶、人心难测。同
时也深感武学的浩瀚无涯。因此隐居在此，不理俗世杂务，全心
投入钻研更高深的武学，以其所学来传承舞者一脉。
LONG);
	setup();
	replace_program(ROOM);
}
