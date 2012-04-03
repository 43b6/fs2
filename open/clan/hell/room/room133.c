inherit ROOM;
void create() {
	set( "short", "SSC2" );
	set( "object", ([
		"amount9"  : 1,
		"amount5"  : 1,
		"file10"   : "/daemon/class/fighter/ywleg",
		"file8"    : "/open/killer/headkill/obj/w_dag",
		"amount10" : 1,
		"file4"    : "/open/start/obj/thunder_hat",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount7"  : 1700,
		"amount2"  : 1,
		"file9"    : "/open/killer/headkill/obj/i_dag",
		"amount3"  : 2,
		"file6"    : "/open/capital/obj/gold_pill",
		"amount8"  : 1,
		"file2"    : "/open/killer/obj/rock",
		"file7"    : "/open/killer/obj/s_pill",
		"file5"    : "/open/sky/obj1/wind_emblem",
		"file1"    : "/open/killer/obj/bellstar",
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount1"  : 29,
	]) );
	set( "owner", "ssc" );
	set( "light_up", 1 );
	set( "build", 10980 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room95.c",
		"west"      : "/open/clan/hell/room/room139",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
