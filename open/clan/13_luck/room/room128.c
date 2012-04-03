inherit ROOM;
void create() {
	set( "short", "������ǰ���" );
	set( "owner", "mil" );
	set( "light_up", 1 );
	set( "object", ([
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"amount8"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/gblade/obj/sa-head",
		"amount9"  : 1,
		"file7"    : "/open/fire-hole/obj/r-pill",
		"amount3"  : 3,
		"amount4"  : 34,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/open/gblade/obj/sa-head",
		"amount10" : 1,
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount6"  : 1,
		"amount7"  : 3,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount5"  : 1,
		"file4"    : "/open/ping/obj/poison_pill",
	]) );
	set( "build", 10365 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room325",
		"up"        : "/open/clan/13_luck/room/room87.c",
	]) );
	set( "long", @LONG
[0;1;32m��[1mo[1m��[1m��[1m��[1mO[1m��[1mg[1m��[1ms[1m��[1mc[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mc[1m��[1mj[1m��[1mD[1m��[1mA[1m��[1m|[1m��[1mP[1m��[1mI[1m��[1mR[1m��[1mA[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mv[1m��[1m��[1m��[1mA[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1mD[1m��[1mH[1m��[1mx[1m��[1mA[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1me[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mz[1m��[1m_[1m��[1mS[1m��[1m��[1;31m��[1m��[1m��[1m��[1m��[1mT[1;32m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1m��[1m��[1mA[1m��[1m@[1m��[1mB[1m��[1m@[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1mA[1m��[1mn[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1mm[0m
[0;1;32m��[1m\[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mA[1m��[1mM[1m��[1mB[1m��[1mC[1m��[1mB[1m��[1mj[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mL[0m
[0;1;32m��[1m��[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ml[1m��[1mA[1m��[1mY[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1m`[1m��[1mA[1m��[1mi[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1ma[1m��[1m@[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1mu[1m��[1mA[1m��[1m��[1m��[1mT[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1m��[1m [0m
[32m [0m
LONG);
	setup();
	replace_program(ROOM);
}
