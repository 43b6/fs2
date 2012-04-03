inherit ROOM;
void create() {
	set( "short", "�����µ�" );
	set( "owner", "mirage" );
	set( "object", ([
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10065 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room161",
	]) );
	set( "long", @LONG
[0;1;36m��[1m@[1m��[1m��[1m��[1mi[1m��[1mo[1m��[1mV[1m��[1m��[1m��[1mA[1m��[1mM[1m��[1mJ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1mA[1m��[1m��[1m��[1mq[1m��[1mJ[1m��[1m��[1m��[1m��[0m�����ٲ�[0;1;36m��[1m��[1m��[1my[0m
[0;1;36m��[1m��[1m��[1mm[1m��[1mA[1m��[1mR[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1;33m��[1m{[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mA[1m��[1my[1m��[1m��[1m��[1m��[1m��[1mE[1m��[1m��[1m��[1me[1m��[1mA[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1me[1m��[1m��[1m��[1mL[1m��[1m��[0m
[0;1;36m��[1mM[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mN[1m��[1mD[1m��[1mb[1m��[1mM[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mO[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1m��[0m
[0;1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1mn[1m��[1mO[1m��[1mH[1m��[1my[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1mC[0m
LONG);
	setup();
	replace_program(ROOM);
}
