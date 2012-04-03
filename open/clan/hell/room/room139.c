inherit ROOM;
void create() {
	set( "short", "SSC3" );
	set( "object", ([
		"amount9"  : 71,
		"amount5"  : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"file4"    : "/daemon/class/fighter/ywcloth",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/killer/obj/s_pill",
		"amount2"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/capital/obj/king-cloak",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/fighter/ywhand",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "ssc" );
	set( "light_up", 1 );
	set( "build", 10128 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room133",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
