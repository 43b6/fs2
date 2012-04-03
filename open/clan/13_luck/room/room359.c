inherit ROOM;
void create() {
	set( "short", "����ƫ��" );
	set( "object", ([
		"file2"    : "/open/doctor/pill/gnd_pill",
		"amount2"  : 954,
		"amount1"  : 869,
		"file1"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 11526 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room362",
		"west"      : "/open/clan/13_luck/room/room144.c",
		"south"     : "/open/clan/13_luck/room/room361.c",
		"north"     : "/open/clan/13_luck/room/room360.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mO[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m@[1m��[1mX[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1;33m��[1m��[1m��[1mF[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m\[0m
[0;1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1;32m��[1mA[1m��[1m��[1;31m��[1ma[1m��[1mF[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1mr[1;32m��[1mA[1m��[1mb[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m@[1m��[1m��[0m
[0;1m��[1m][1m��[1mO[1m��[1mi[1m��[1mH[1;35m��[1m��[1m��[1mr[1;32m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1mS[1;32m��[1mA[1m��[1mb[1m��[1mH[1m��[1m��[1m��[1mu[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
