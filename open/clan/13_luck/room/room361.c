inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"amount9"  : 100,
		"file9"    : "/open/fire-hole/obj/g-pill",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount8"  : 100,
		"file4"    : "/open/fire-hole/obj/g-pill",
		"file5"    : "/open/fire-hole/obj/g-pill",
		"amount7"  : 100,
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file8"    : "/open/fire-hole/obj/g-pill",
		"file7"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount6"  : 100,
		"amount5"  : 100,
		"amount2"  : 78,
		"file6"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 100,
		"amount1"  : 100,
		"amount4"  : 100,
	]) );
	set( "build", 10104 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room364",
		"west"      : "/open/clan/13_luck/room/room358.c",
		"north"     : "/open/clan/13_luck/room/room359.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1m��[1mb[1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1mO[1m��[1mO[1;37m��[1m��[1m��[1m��[1;32m��[1mC[1;35m��[1m��[1m��[1m��[1;32m��[1mC[1;31m��[1m��[1m��[1m��[1;32m��[1mC[1;34m��[1m��[1m��[1m��[1;32m��[1mC[1;33m��[1m��[0m
[0;1;33m��[1m��[0m���̹�[0;1;31m��[1m��[1m��[1ms[1;32m��[1mA[1m��[1mC[1m��[1m@[1m��[1m��[1;31m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1mO[1m��[1mD[1m��[1m`[1m��[1m��[1m��[1mr[1m��[1mA[1m��[1mS[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mN[1m��[1ma[1m��[1mX[1m��[1mO[0m
[0;1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mQ[1m��[1mn[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mk[1m��[1mQ[1m��[1mA[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[0m
[0;1m��[1m��[1;36m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1mP[1m��[1mC[1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1mA[1;34m��[1m��[1m��[1ms[1;36m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m[[1;31m��[1m��[1m��[1mO[0m
[0;1m��[1m��[1m��[1m\[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
