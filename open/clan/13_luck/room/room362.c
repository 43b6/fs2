inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/k-pill",
		"file7"    : "/open/fire-hole/obj/k-pill",
		"amount1"  : 20,
		"file8"    : "/open/fire-hole/obj/k-pill",
		"amount3"  : 20,
		"amount4"  : 20,
		"file10"   : "/open/fire-hole/obj/k-pill",
		"amount8"  : 20,
		"file5"    : "/open/fire-hole/obj/k-pill",
		"file1"    : "/open/fire-hole/obj/k-pill",
		"file3"    : "/open/fire-hole/obj/k-pill",
		"file2"    : "/open/fire-hole/obj/k-pill",
		"amount10" : 20,
		"amount7"  : 20,
		"amount9"  : 20,
		"amount2"  : 20,
		"file9"    : "/open/fire-hole/obj/k-pill",
		"file4"    : "/open/fire-hole/obj/k-pill",
		"amount5"  : 20,
		"amount6"  : 10,
	]) );
	set( "build", 10728 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room359.c",
		"south"     : "/open/clan/13_luck/room/room364",
		"north"     : "/open/clan/13_luck/room/room363.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m@[1m��[1mY[1m��[1mI[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1mA[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1ms[0m
[0;1m��[1m��[1;34m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1mn[1m��[1mi[1m��[1mJ[1;33m��[1ms[1m��[1m��[1m��[1m][1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1mW[1m��[1m��[1;36m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m~[1m��[1m��[1m��[1m��[0m
[0;1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m][1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1mi[1m��[1mh[1m��[1m��[1m��[1mN[1m��[1mq[1m��[1m��[1m��[1mb[1m��[1mX[1m��[1m��[1m��[1mL[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m@[0m
[0;1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1ms[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1mM[1m��[1m@[1m��[1m��[1m��[1m��[1;31m��[1ms[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mN[0m
[0;1m��[1mS[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mX[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
