inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "mad" );
	set( "object", ([
		"amount3"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/ping/obj/chilin_legging",
		"file3"    : "/open/gsword/obj/dragon-sword",
		"amount8"  : 95552,
		"amount5"  : 1,
		"file9"    : "/open/ping/obj/chilin_legging",
		"file2"    : "/open/gsword/obj/dragon-sword",
		"file5"    : "/open/wind-rain/obj/bird-blade",
		"amount2"  : 1,
		"file6"    : "/open/gsword/obj/dragon-cloth",
		"file7"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/doctor/pill/gnd_pill",
		"amount6"  : 1,
		"amount10" : 359,
		"amount9"  : 1,
	]) );
	set( "build", 10762 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room62",
	]) );
	set( "long", @LONG

        ��        ��        ��        ��        ��        ��

            ��        ��        ��        ��        ��        ��

                ��        ��        ��        ��        ��        ��

                    ��        ��        ��        ��        ��        ��

LONG);
	setup();
	replace_program(ROOM);
}
