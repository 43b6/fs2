inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "son" );
	set( "object", ([
		"amount1"  : 100,
		"file4"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 1100,
		"amount4"  : 2,
		"file3"    : "/open/doctor/pill/sky_pill",
		"amount8"  : 695,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount5"  : 200,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 9,
		"file8"    : "/open/doctor/pill/gnd_pill",
		"file7"    : "/open/doctor/pill/sky_pill",
		"amount3"  : 200,
	]) );
	set( "build", 10026 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room67",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;33m��[1mp[1;37m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mZ[1m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mB[1m��[1mD[1m��[1mO[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m`[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1m��[0m
[0;1;33m��[1mp[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mQ[1m��[1mh[1m��[1mN[1m��[1mN[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mA[1m��[1m��[1;33m��[1mp[1;37m��[1ma[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m|[1m��[1mg[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;32m��[1mA[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1mp[1;37m��[1mA[1m��[1mj[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m��[0m
[0;1;33m��[1mp[1;37m��[1m��[1m��[1mo[1m��[1m��[1m��[1mh[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1;33m��[1mp[1;37m��[1m~[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mO[1m��[1m��[1;35m��[1mF[1m��[1m��[1;37m��[1m��[1m��[1mD[0m

[0;1m [0m
[0;1;31m��[1mp[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m


LONG);
	setup();
	replace_program(ROOM);
}
