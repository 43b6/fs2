inherit ROOM;
void create() {
	set( "short", "���ʵ���" );
	set( "object", ([
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 10,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/capital/obj/blade2",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/fire-hole/obj/g-pill",
		"amount7"  : 1,
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"amount6"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10102 );
	set( "owner", "peels" );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
