inherit ROOM;
void create() {
	set( "short", "��Ӱ����¥" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount5"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
	]) );
	set( "owner", "binch" );
	set( "build", 10087 );
	set( "light_up", 1 );
	set( "exits", ([
		"asfd"      : "/open/clan/13_luck/room/room84",
		"poll"      : "/open/clan/13_luck/room/room89",
		"south"     : "/open/clan/13_luck/room/room130",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1;37m��[1mo[1m��[1m��[1m��[1mK[1m��[1mO[1m��[1mQ[1m��[1mT[1m��[1m_[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mh[1m��[1m|[1m��[1mP[1m��[1m��[1m��[1mO[1m��[1mQ[1m��[1mT[1m��[1ma[1m��[1mL[0m
[0;1;37m��[1mA[1m��[1m��[1m��[1me[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1me[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mT[1m��[1mj[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1mH[1m��[1mH[1m��[1m��[1m��[1mX[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mh[1m��[1mA[1m��[1mT[1m��[1mj[1m��[1m��[1m��[1mU[1m��[1mU[1m��[1mJ[1m��[1m��[1m��[1mT[1m��[1m��[1m��[1mr[1m��[1mA[1m{[0;1;4;5;33m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[0;1;37m}[1m [1m{[0;1;4;5;36m��[1;4;5m��[1;4;5m��[1;4;5mB[1;4;5m��[1;4;5m��[0;1;37m}[1m [1m{[0;1;4;5;31m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[0;1;37m}[1m��[1mA[0m
[0;1;37m��[1mo[1m��[1mT[1m��[1mj[1m��[1m��[1m��[1mG[1m��[1mM[1m��[1mp[1m��[1mN[1m��[1mQ[1m��[1m��[1m��[1mO[1m��[1mQ[1m��[1mT[1m��[1m��[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
