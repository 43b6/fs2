inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "owner", "son" );
	set( "object", ([
		"amount6"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/daemon/class/fighter/figring",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10092 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room142",
		"south"     : "/open/clan/13_luck/room/room136.c",
	]) );
	set( "long", @LONG

����[0;1m��[1mo[1m��[1m��[1m��[1mO[1m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1mE[1m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1m��[1mA[1m��[1m��[1m��[1m��[1m��[1md[1m��[1m~[1m��[1m��[1m��[1m��[1;36m��[1mR[1m��[1m��[1m��[1m��[1;32m��[1mB[1m��[1m][1m��[1ms[1;33m��[1m��[1m��[1m��[1m��[1m��[1;32m��[1mB[1m��[1m][1m��[1mM[1;34m��[1m��[1m��[1mL[1m��[1mT[1;32m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mP[1;31m��[1m��[1m��[1m��[1;32m��[1mB[0m
[0;1m��[1m][1m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1mk[1;32m��[1m��[1m��[1mZ[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mO[1m��[1m��[1m��[1md[1m��[1m��[1m��[1mU[1m��[1mW[1m��[1m~[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mG[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mu[1m��[1mO[1m��[1mn[1m��[1m��[0m
[0;1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[1m��[1m\[1m��[1m~[1m��[1mV[1m��[1mA[1m��[1mF[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mp[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
