inherit ROOM;
void create() {
	set( "short", "������" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room137",
		"east"      : "/open/clan/13_luck/room/room359.c",
		"south"     : "/open/clan/13_luck/room/room358.c",
		"north"     : "/open/clan/13_luck/room/room357.c",
	]) );
	set( "object", ([
		"file4"    : "/open/fire-hole/obj/p-pill",
		"amount3"  : 1,
		"file6"    : "/open/fire-hole/obj/y-pill",
		"amount2"  : 200,
		"amount7"  : 207,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"file3"    : "/open/mogi/dragon/obj/power",
		"file2"    : "/open/fire-hole/obj/g-pill",
		"amount6"  : 100,
		"file7"    : "/open/ping/obj/poison_pill",
		"amount5"  : 90,
		"amount4"  : 100,
		"amount1"  : 23,
		"file5"    : "/open/fire-hole/obj/b-pill",
	]) );
	set( "build", 10086 );
	set( "long", @LONG

����[0;1m��[1m��[1m��[1m}[1m��[1mj[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mA[1m��[1mY[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mw[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1m��[1m��[1m��[1mO[1;33m��[1md[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1mO[1m��[1mj[1m��[1mN[1;31m��[1m��[1m��[1ml[1m��[1m��[1m��[1mv[1;32m��[1m��[1m��[1md[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mH[1m��[1m��[0m
[0;1m��[1mX[1;34m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;32m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;32m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ml[1m��[1mh[1m��[1mM[1m��[1m��[1m��[1m`[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m`[0m
[0;1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1ms[1m��[1mw[1m��[1m[[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1mC[0m 

LONG);
	setup();
	replace_program(ROOM);
}
