inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "owner", "mory" );
	set( "object", ([
		"file4"    : "/open/ping/questsfan/obj/diamond_boots",
		"amount5"  : 1,
		"amount10" : 1,
		"file10"   : "/open/ping/questsfan/obj/diamond_legging",
		"amount7"  : 1,
		"file7"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file6"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount2"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_armor",
		"amount8"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount6"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_belt",
	]) );
	set( "light_up", 1 );
	set( "build", 10210 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room25",
		"west"      : "/open/clan/demon_castle/room/room6.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
