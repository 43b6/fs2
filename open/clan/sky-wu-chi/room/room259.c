inherit ROOM;
void create() {
	set( "short", "湖心小筑" );
	set( "object", ([
		"amount3"  : 1,
		"amount9"  : 20,
		"file5"    : "/open/gblade/obj/sa-head",
		"amount7"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/daemon/class/fighter/figring",
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file9"    : "/open/doctor/pill/human_pill",
		"file8"    : "/daemon/class/fighter/figring",
		"amount6"  : 19,
		"amount5"  : 1,
	]) );
	set( "owner", "flight" );
	set( "build", 10184 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room116.c",
	]) );
	set( "long", @LONG
这是一个与世隔绝的地方,四周的空气弥漫着花香,树林传来阵阵的鸟语,
这里远离了世俗的尘埃,是一个稀少人会知道的世外仙境,没有战争只有
和平,也因为这里的宁静正好是一个让人能够快速修养身心的好地方,
如果你有足够的缘分到达此世外仙境,希望你自己可以保持此仙境的宁静和平.
LONG);
	setup();
	replace_program(ROOM);
}
