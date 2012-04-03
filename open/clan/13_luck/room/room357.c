inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"amount7"  : 100,
		"amount1"  : 300,
		"amount10" : 100,
		"amount3"  : 300,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount6"  : 300,
		"file4"    : "/open/fire-hole/obj/g-pill",
		"amount2"  : 300,
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file10"   : "/open/fire-hole/obj/g-pill",
		"amount4"  : 300,
		"file9"    : "/open/fire-hole/obj/g-pill",
		"file5"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 300,
		"file7"    : "/open/fire-hole/obj/g-pill",
		"amount9"  : 300,
		"file6"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "build", 10113 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room360",
		"south"     : "/open/clan/13_luck/room/room144.c",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1m��[1mb[1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1mO[1m��[1mO[1;37m��[1m��[1m��[1m��[1;32m��[1mC[1;35m��[1m��[1m��[1m��[1;32m��[1mC[1;31m��[1m��[1m��[1m��[1;32m��[1mC[1;34m��[1m��[1m��[1m��[1;32m��[1mC[1;33m��[1m��[0m
[0;1;33m��[1m��[0m���̹�[0;1;31m��[1m��[1m��[1ms[1;32m��[1mA[1m��[1mC[1m��[1m@[1m��[1m��[1;31m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1mO[1m��[1mD[1m��[1m`[1m��[1m��[1m��[1mr[1m��[1mA[1m��[1mS[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mN[1m��[1ma[1m��[1mX[1m��[1mO[0m
[0;1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mQ[1m��[1mn[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mk[1m��[1mQ[1m��[1mA[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[0m
[0;1m��[1m��[1;36m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1mP[1m��[1mC[1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1mA[0m����[0;1;36m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m[[1;33m��[1mM[1m��[1mk[0m
[0;1m��[1m��[1m��[1m\[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
