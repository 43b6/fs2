inherit ROOM;
void create() {
	set( "short", "ŭ����" );
	set( "object", ([
		"file8"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount1"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/daemon/class/fighter/armband",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file10"   : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "binch" );
	set( "build", 10070 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room255",
		"north"     : "/open/clan/13_luck/room/room134.c",
		"up"        : "/open/clan/13_luck/room/room129",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
                                      =
[0;1m [1m [1m [1m [0;1;4;5;31m��[1;4;5m@[1;4;5m��[1;4;5mW[1;4;5m��[1;4;5mh[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[0;1;32m��[1mA[0;1;4;37m��[1;4m��[1;4m��[1;4mk[1;4m��[1;4mB[1;4m��[1;4mI[1;4m��[1;4m��[1;4m��[1;4m��[1;4m��[1;4m��[0;1;32m��[1mC[0m

[0;1m [1m [1m [1m [1m [1m [1m [1m [0;1;4m��[1;4mh[1;4m��[1;4m��[1;4m��[1;4m��[1;4m��[1;4mt[1;4m��[1;4m_[1;4m��[1;4m��[1;4m��[1;4m��[0;1m��[1mA[0;1;4;5;35m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5mb[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5m��[1;4;5mF[0;1;32m��[1mC[0m

[0;1;33;41m��[1mQ[1m��[1mT[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m@[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1mO[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mk[0m
[0;1;33;41m��[1mH[1m��[1mA[0;1;4;31;45m��[1;4m��[1;4m��[1;4m��[0;1;33;41m��[1mA[1m��[1mb[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1m\[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1my[1m��[1mU[1m��[1mF[1m��[1m��[1m��[1m\[1m��[1mA[0m
[0;1;33;41m��[1m��[1m��[1my[1m��[1m��[1m��[1mF[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mv[1m��[1mK[1m��[1mO[1;47m��[1mQ[1m��[1mT[1m��[1m_[1m��[1m��[1m��[1m��[1m��[1m@[1;41m��[1m��[1;31;46m��[1m��[1m��[1m\[1m��[1m��[1m��[1m��[1;33;41m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
