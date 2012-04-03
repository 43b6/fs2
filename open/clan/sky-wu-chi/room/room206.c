inherit ROOM;
void create() {
	set( "short", "������" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room16.c",
		"north"     : "/open/clan/sky-wu-chi/room/room171",
		"south"     : "/open/clan/sky-wu-chi/room/room358.c",
		"east"      : "/open/clan/sky-wu-chi/room/room245",
	]) );
	set( "owner", "roboo" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 7,
		"file2"    : "/open/mogi/mountain/obj/frog-pill",
		"amount2"  : 1,
		"amount1"  : 237,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/fire-hole/obj/y-pill",
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10061 );
	set( "long", @LONG

[0;1;37m [1m [1m [1m [1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1ma[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;31m [1m [1m [1m [1m��[1mj[1m��[1mq[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mQ[1m��[1mX[1m��[1mA[1m��[1mq[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mg[1m��[1mW[1m��[1mA[1m��[1mA[1m��[1m][1m��[1mS[1m��[1mi[1m��[1m}[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mC[0m

 [0;1;33m [1m [1m [1m��[1mY[1m��[1m��[1m��[1mJ[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m��[1m��[1mH[1m��[1mA[1m��[1mY[1m��[1m}[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1mN[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m

[0;1;37m [1m [1m [1m [1;36m��[1mH[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1mM[1m��[1mb[1m��[1m^[1m��[1m��[1m [1m [1m��[1m��[1m��[1m��[1m��[1m��[1m [1m [1m��[1mN[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1mW[1m��[1m��[1m��[1mO[1m��[1mq[1m [1m [1m [0m
[0;1;36m [1m [1m [1m [1m��[1mP[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m`[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mX[1m��[1m��[1m��[1m@[1m [1m��[1mH[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m [1m��[1m��[1m��[1mv[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1mO[0m
 [0;1;37m [1m [1m [1;36m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m [1m��[1mA[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m.[1m.[1m.[1m.[1m.[1m.[1m.[1;37m [0m

LONG);
	setup();
	replace_program(ROOM);
}
