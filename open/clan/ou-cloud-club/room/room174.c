inherit ROOM;
void create() {
	set( "short", "波波装备室" );
	set( "build", 7160 );
	set( "owner", "perth" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 27,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/castle/obj/ninepill",
		"amount6"  : 1,
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount8"  : 7,
		"amount3"  : 142,
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/killer/obj/black",
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/killer/obj/dagger",
		"file10"   : "/open/gblade/obj/sa-head",
		"amount5"  : 1,
	]) );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room137",
	]) );
	set( "long", @LONG
杀手波努收集到的装备集中处，都是各地收集回来的宝物
都是些未曾见过的暗器、匕首、防具，有些还刻有名字，大概又是杀人抢回来的吧
对波的恐惧又加深了几分，手里拿着的剑，不自觉抖了起来
还是赶快离开这间房间吧，不然波回来可能又有危险了
LONG);
	setup();
	replace_program(ROOM);
}
