inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "bluefox" );
	set( "light_up", 1 );
	set( "object", ([
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 19,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"file9"    : "/open/killer/headkill/obj/i_dag",
		"file3"    : "/open/dancer/obj/yuawaist",
		"file1"    : "/open/killer/obj/s_pill",
		"amount6"  : 300,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount1"  : 790,
		"amount8"  : 1,
		"amount10" : 1,
		"amount2"  : 7,
		"file5"    : "/open/doctor/pill/sky_pill",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount7"  : 1,
	]) );
	set( "build", 10409 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room94",
	]) );
	set( "long", @LONG
[0;1;36m��[1m��[1m��[1mq[1m��[1mJ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mV[1m��[1mr[1m��[1m��[1m��[1m��[1m��[1my[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1mR[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m{[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1my[0m
[0;1;36m��[1m��[1m��[1m��[1m��[1mE[1m��[1m��[1m��[1me[1m��[1mA[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1me[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mM[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[0m
[0;1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1mn[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1mn[1m��[1mC[1m��[1mr[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[0m
[0;1;36m��[1ms[1m��[1m}[1m��[1mA[1m��[1mG[1m��[1mm[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mo[0m
[0;1;36m��[1mq[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mQ[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mb[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1md[1m��[1m~[1m��[1mH[1m��[1mB[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1mr[1m��[1mA[1m��[1m��[1m��[1mO[0m
[0;1;35m��[1mu[1m��[1m��[1m��[1m��[1m��[1mV[1m��[1mg[1m��[1ms[1m��[1m~[1m��[1mv[0m
LONG);
	setup();
	replace_program(ROOM);
}
