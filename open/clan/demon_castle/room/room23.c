inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "object", ([
		"file10"   : "/open/ping/obj/ring-2",
		"file4"    : "/open/badman/obj/evil_claw",
		"amount10" : 1,
		"file6"    : "/open/snow/obj/figring",
		"amount6"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"file3"    : "/open/badman/obj/badhelmet",
		"file5"    : "/open/scholar/obj/icefan",
		"file9"    : "/open/ping/obj/ring-2",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"file7"    : "/open/snow/obj/figring",
		"amount7"  : 1,
		"amount1"  : 1,
	]) );
	set( "owner", "mory" );
	set( "build", 10039 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room22",
		"west"      : "/open/clan/demon_castle/room/room24",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
