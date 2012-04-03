inherit ROOM;
void create() {
	set( "short", "С�ϼҴ���" );
	set( "owner", "son" );
	set( "object", ([
		"file5"    : "/open/magic-manor/obj/golden-ball",
		"file2"    : "/open/magic-manor/obj/water-ball",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"file8"    : "/open/killer/outsea/dstone",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/magic-manor/obj/fire-ball",
		"amount1"  : 1,
		"amount6"  : 100,
		"amount8"  : 1,
		"file4"    : "/open/magic-manor/obj/soil-ball",
	]) );
	set( "build", 10200 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room54.c",
		"enter"     : "/open/clan/13_luck/room/room67",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1mF[1mS[1m��[1m��[1m��[1m��[1m��[1md[1m��[1ms[1m��[1m@[1m��[1m~[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[1m��[1mA[1;32m��[1mp[1m��[1mn[1;37m��[1mN[1m��[1mU[1m��[1mw[1m��[1mM[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1mN[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mv[1m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1m\[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mL[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;37m��[1m��[1m��[1mX[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mD[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m}[1m��[1mb[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mU[1;35m��[1mZ[1m��[1mL[1m��[1m��[1m��[1mD[1;37m��[1m��[1m��[1m��[1m��[1mA[0m
[0;1;37m��[1mM[1m��[1mo[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1;33m��[1mO[1m��[1ms[1m��[1mM[1;36m��[1m��[1m��[1m��[1m��[1mC[1;37m��[1mA[1m��[1m��[1m��[1mi[1;34m��[1m��[1m��[1mO[1m��[1m��[1m��[1mU[1;37m��[1mA[1;31m��[1m��[1m��[1m��[1m��[1mW[1m��[1mL[1;37m.[1m.[1m.[1m.[0m

LONG);
	setup();
	replace_program(ROOM);
}
