inherit ROOM;
void create() {
	set( "short", "��ƫ��" );
	set( "owner", "sdram" );
	set( "object", ([
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file1"    : "/open/mogi/dragon/obj/power",
		"amount1"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
	]) );
	set( "build", 10473 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room345",
		"west"      : "/open/clan/13_luck/room/room139.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1;32m��[1mb[1;34m��[1m][1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mr[1m��[1m][1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1;31m��[1mg[1m��[1m��[1;32m��[1m��[0m
[0;1m��[1m|[1m��[1mI[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mL[1m��[1m@[1m��[1m��[1m��[1mK[1m��[1mF[1m��[1mY[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1m\[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1;37m��[1mA[1m��[1mp[1;32m��[1mA[1m��[1m��[1m��[1mT[0m
[0;1m��[1mM[1m��[1me[1m��[1mh[1m��[1m][1m��[1mu[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mw[1m��[1mA[1m��[1m��[1m��[1mn[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mh[1m��[1mD[1m��[1m��[1m��[1m][1m��[1m~[0m
[0;1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1ms[1m��[1m��[1;32m��[1m��[1m��[1mW[1m��[1m[[1m��[1mp[1m��[1m��[1;36m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1;32m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
