inherit ROOM;
void create() {
	set( "short", "�쳾Ц" );
	set( "owner", "binch" );
	set( "object", ([
		"amount8"  : 2,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/capital/guard/gring",
		"file4"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"file8"    : "/open/mogi/castle/obj/sspill",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10741 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room132.c",
		"east"      : "/open/clan/13_luck/room/room133.c",
		"south"     : "/open/clan/13_luck/room/room131.c",
		"door"      : "/open/clan/13_luck/room/room36",
		"north"     : "/open/clan/13_luck/room/room130.c",
	]) );
	set( "long", @LONG

[0;1;31m [1m [1m [1m [1m��[1mb[1m��[1mo[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1mG[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1mA[1;36m��[1mL[1m��[1m��[1m��[1me[1m��[1m|[1m��[1m��[1;31m��[1mA[1;33m��[1mZ[1m��[1m\[1m��[1m��[1m��[1my[1m��[1m{[1m��[1mK[1m��[1m��[1;31m��[1mA[1m��[1m��[1m��[1m��[0m
[0;1;31m��[1mQ[1m��[1mT[1m��[1m��[1m��[1mD[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m_[1m��[1ms[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mH[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1me[1m��[1m��[0m
[0;1;31m��[1mA[1m��[1m��[1m��[1mo[1m��[1mH[1m��[1mN[1m��[1mZ[1m��[1mL[1m��[1me[1m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1ma[1m��[1m��[1m��[1m_[1;31m��[1mA[1m��[1m��[1;37m��[1m��[1m��[1ma[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m@[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1mA[0m
[0;1;31m��[1m��[1m��[1m\[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1md[1m��[1md[1m��[1mL[1m��[1mX[1m��[1mA[1m��[1mL[1m��[1mK[1m��[1mO[1m��[1mZ[1m��[1mL[1m��[1mq[1m��[1m|[1m��[1m��[1m��[1m_[1m��[1mH[1m [1;44m��[1m��[1m��[1m@[1m��[1mg[1m��[1mH[1;40m [0;31m��[0m

LONG);
	setup();
	replace_program(ROOM);
}
