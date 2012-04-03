inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "mirage" );
	set( "object", ([
		"file9"    : "/open/prayer/obj/boris-hat",
		"file4"    : "/daemon/class/blademan/obj/gold-blade",
		"amount5"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
	]) );
	set( "build", 11034 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room175",
		"west"      : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG
        [0;1;35m��[1m��[1m��[1m��[1m��[1mn[1m��[1m_[1;37m [1m [1;34m��[1mK[1m��[1m��[1m��[1m��[1m��[1mN[1;37m [1m [1;33m��[1mC[1m��[1m��[1m��[1m`[1m��[1m��[1;37m [1m [1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37m [0m

[0;1m��[1m@[1m��[1m@[1;36m��[1m@[1m��[1m��[1m��[1mW[1m��[1mo[1m��[1ms[1m��[1mV[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1mV[1m��[1mA[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1m��[1m��[1m^[1m��[1mB[0m
[0;1;36m��[1m@[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mW[1m��[1mA[1m��[1mO[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mh[1m��[1mA[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1mV[0m
[0;1;36m��[1m~[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mS[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mV[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m@[1m��[1m��[1m��[1mH[1m��[1mA[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mO[1;31m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mA[1m��[1m��[0m
[0;1;36m��[1mo[1m��[1m��[1m��[1mW[1m��[1mi[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1mP[1m��[1m��[1;32m��[1m��[1m��[1m��[1;36m��[1mA[1m��[1mB[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mm[1m��[1mZ[1m��[1m\[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1mP[0m
[0;1;36m��[1m��[1m��[1mH[1m��[1mN[1m��[1mA[1m��[1mD[1m��[1m@[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mC[0m
LONG);
	setup();
	replace_program(ROOM);
}
