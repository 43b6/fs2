inherit ROOM;
void create() {
	set( "short", "$RED$猫座$NOR$" );
	set( "object", ([
		"file6"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file1"    : "/daemon/class/fighter/ywhand",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
	]) );
	set( "owner", "onyx" );
	set( "build", 10068 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room21.c",
		"south"     : "/open/clan/hell/room/room64",
		"east"      : "/open/clan/hell/room/room65.c",
		"north"     : "/open/clan/hell/room/room66.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里是传说中$RED$猫界$NOR$的最底层，眼前出现的是猫神界的$HIW$王座$NOR$，
不过并末看过霹雳猫本人，大概又忙于外务出去了，听说他最近要考试，
也不知道是出去读书还是骗妹妹，王座上怖满着灰尘，可以想见，
霹雳猫一定是个懒惰致极的人............  哈哈

LONG);
	setup();
	replace_program(ROOM);
}







































































































































































































































































