inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "mil" );
	set( "object", ([
		"file9"    : "/open/prayer/obj/boris-hat",
		"amount8"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"file4"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 14145 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room128.c",
		"south"     : "/open/clan/13_luck/room/room343",
	]) );
	set( "long", @LONG
[0;1;35m��[1mh[1m��[1ms[1m��[1mw[1m��[1m��[1m��[1mv[1;37m��[1m@[1;34m��[1m@[1m��[1mS[1m��[1m��[1m��[1md[1m��[1ms[1;37m��[1m@[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [0m        [0;1m [1m [1m [1;36m��[1mg[1m��[1ms[1m��[1m{[1m��[1m��[1m��[1m��[1;37m��[1m@[1;33m��[1mM[1m��[1mS[1m��[1mZ[1m��[1mL[1m��[1m��[1;37m [0m
[0;1m��[1m@[1m��[1m@[0m
[0;1m��[1m@[1m��[1m@[1;32m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1mg[1m��[1ms[1m��[1m��[1;32m��[1m��[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1mQ[1m��[1m��[1m��[1mG[1m��[1mH[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mA[1m��[1m��[1m��[1mW[1m��[1mA[1m��[1mO[0m
[0;1;32m��[1mA[1m��[1m��[1m��[1mI[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1mT[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1mA[1m��[1mW[1m��[1mY[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1mu[1m��[1m@[1;31m��[1m��[1m��[1m@[1m��[1m@[1m��[1m@[1m��[1mg[1m��[1m@[1m��[1ms[1;32m��[1m@[1m��[1mv[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1mr[1m��[1mC[0m
LONG);
	setup();
	replace_program(ROOM);
}
