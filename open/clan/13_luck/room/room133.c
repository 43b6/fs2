inherit ROOM;
void create() {
	set( "short", "Ӱ���" );
	set( "owner", "binch" );
	set( "object", ([
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount3"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10059 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room134.c",
		"east"      : "/open/clan/13_luck/room/room72",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [0;1;5;31;42m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mQ[1;5m��[1;5m��[1;5m��[1;5mA[1;5m��[1;5mv[1;5m��[1;5m��[1;5m��[1;5mH[1;5m��[1;5m��[0;1;37;40m��[1mC[1m��[1m��[1m��[1me[1m��[1m��[1m��[1mK[1m��[1mj[1m��[1mr[1m��[1mA[1m��[1mR[1m��[1m��[1m��[1mF[1m��[1mW[1m��[1mG[1m��[1m`[1m��[1mH[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1mP[1m��[1m��[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1mo[1m��[1mK[1m��[1mj[1m��[1mr[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m@[1m��[1m��[1;36m��[1m��[1m��[1mv[1m��[1mW[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mb[0m
[0;1;37m��[1mo[1m��[1mA[1m��[1mN[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mG[1m��[1m@[1m��[1mW[1m��[1m��[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mH[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1mA[1;35m��[1m��[1m��[1mn[1m��[1m��[1m��[1m_[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1mW[1m��[1m��[1m��[1m}[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1mH[1;37m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
