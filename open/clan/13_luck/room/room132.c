inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "binch" );
	set( "object", ([
		"amount4"  : 34,
		"amount5"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/ping/obj/poison_pill",
		"amount2"  : 60,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/fire-hole/obj/w-pill",
		"amount6"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount10" : 10,
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 114,
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 10,
		"file8"    : "/open/ping/obj/poison_pill",
		"amount9"  : 1,
		"amount7"  : 10,
		"amount8"  : 40,
	]) );
	set( "build", 10066 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room254",
		"east"      : "/open/clan/13_luck/room/room134.c",
	]) );
	set( "long", @LONG

[0;1;33m [1m [1m [1m [1m��[1mo[1m��[1m��[1m��[1mM[1m��[1ma[1m��[1m��[1m��[1mg[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m}[1;36m��[1mj[1m��[1m��[1;33m��[1mA[1m��[1mb[1m��[1m@[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1me[1m��[1m��[1m��[1m_[1m��[1mF[1m��[1m@[0m
[0;1;33m��[1mD[1;31m��[1mg[1m��[1mz[1;34m��[1ms[1m��[1m��[1m��[1m��[1;33m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mQ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mk[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mG[1m��[1m��[1m��[1mD[1;34m��[1m��[1m��[1mv[1;33m��[1mA[1m��[1mo[1m��[1m��[0m
[0;1;33m��[1mN[1m��[1mO[1m��[1m��[1m��[1m��[1;36m��[1mQ[1m��[1mT[1m��[1m��[1m��[1mD[1;33m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mw[1;33m��[1mA[1m��[1mn[1m��[1m��[1m��[1m@[1m��[1mD[1m��[1mv[1m��[1ml[0m
[0;1;33m��[1m{[1m��[1m{[1m��[1mA[1m��[1mG[1m��[1mM[1m��[1m��[1m��[1mp[1m��[1m@[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mH[1m��[1m`[1m��[1m��[1m [0;1;5;31;44m [1;5m��[1;5mg[1;5m [0;1;33;40m [1m [1m [1m [1m [1m��[1mA[1m [1m [1m [1m [1m [0;1;5;35;41m [1;5m��[1;5mv[0;1;33;40m [1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
