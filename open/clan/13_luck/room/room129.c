inherit ROOM;
void create() {
	set( "short", "����ר��ͣ����" );
	set( "owner", "binch" );
	set( "object", ([
		"amount6"  : 1,
		"file9"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10046 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room131.c",
		"up"        : "/open/clan/13_luck/room/room96.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1;32m [1m [1m [1m [1m��[1m��[1m��[1mi[1m��[1mo[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1m~[1m��[1mM[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1;45m��[1m][1m��[1m��[1;40m��[1mA[1;45m��[1mW[1m��[1m��[1;40m��[1mA[1m��[1m{[1m��[1mu[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mO[1mF[1m1[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mM[1m��[1m@[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mW[1m��[1mC[1m��[1m��[1m��[1mH[1m��[1mm[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mu[1m��[1mO[1m��[1mR[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mS[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1ms[1m��[1md[1m��[1mq[1m��[1m��[1;35;46m��[1m��[1m��[1m��[1m��[1m��[1m��[1m][1m��[1m��[1;32;40m��[1m][1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1m��[0m
[0;1;32m��[1mu[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1md[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1m��[1m��[1;32m��[1m��[1;33m��[1m��[1m��[1mW[1;32m��[1mA[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mY[1m��[1m@[1m��[1mw[1m��[1m��[1m��[1mp[1m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
