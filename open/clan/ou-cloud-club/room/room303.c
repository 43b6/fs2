inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file3"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 1,
		"amount7"  : 4,
		"amount8"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"file6"    : "/open/capital/obj/blade2",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"file7"    : "/open/fire-hole/obj/g-pill",
		"amount6"  : 1,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/magic-manor/obj/maun-shadow-blade",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "build", 10251 );
	set( "owner", "sleep" );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
