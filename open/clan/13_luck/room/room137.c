inherit ROOM;
void create() {
	set( "short", "��ҩ������" );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 47,
		"amount2"  : 50,
		"amount7"  : 64,
		"file8"    : "/open/fire-hole/obj/k-pill",
		"file7"    : "/open/fire-hole/obj/b-pill",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"amount3"  : 100,
		"amount8"  : 13,
		"amount6"  : 35,
		"file5"    : "/open/fire-hole/obj/w-pill",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file3"    : "/open/fire-hole/obj/p-pill",
		"amount9"  : 50,
		"amount4"  : 161,
		"amount1"  : 98,
		"amount10" : 49,
		"file9"    : "/open/fire-hole/obj/y-pill",
		"file10"   : "/open/fire-hole/obj/p-pill",
		"file2"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "build", 10110 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room136.c",
		"enter"     : "/open/clan/13_luck/room/room144",
	]) );
	set( "long", @LONG

����[0;1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1mA[1m��[1mY[1m��[1mD[1m��[1m��[1m��[1m@[1m��[1m@[1m��[1m��[1;31m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mK[1m��[1mO[1m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[0m
[0;1;36m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1my[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1mA[1m��[1ma[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mA[1m��[1mW[1m��[1mY[0m
[0;1m��[1m��[1m��[1m��[1m��[1mu[1m��[1m@[1;31m��[1ma[1;32m��[1m@[1;33m��[1m��[1;32m��[1m@[1;34m��[1m��[1;32m��[1m@[1;35m��[1m@[1;32m��[1m@[1m��[1mv[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1mr[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mQ[1m��[1mT[1m��[1mN[0m
[0;1m��[1m��[1m��[1m��[1m��[1ml[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;32m��[1mh[1m��[1mi[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mH[1m��[1mK[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
