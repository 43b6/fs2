inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount2"  : 1,
		"amount10" : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"amount7"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount1"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file7"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/ping/obj/cloud_fan",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 11694 );
	set( "owner", "pals" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
