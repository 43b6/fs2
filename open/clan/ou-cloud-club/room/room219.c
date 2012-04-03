inherit ROOM;
void create() {
	set( "short", "MIKO" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/love/obj/shield",
		"file6"    : "/open/gsword/obj/yuskirt",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/daemon/class/fighter/armband",
		"file2"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
		"file10"   : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "etc" );
	set( "build", 12264 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room212",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
