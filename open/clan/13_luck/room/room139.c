inherit ROOM;
void create() {
	set( "short", "����" );
	set( "build", 10086 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room344.c",
		"south"     : "/open/clan/13_luck/room/room355",
		"west"      : "/open/clan/13_luck/room/room172.c",
		"out"       : "/open/clan/13_luck/room/room138.c",
		"north"     : "/open/clan/13_luck/room/room174.c",
	]) );
	set( "long", @LONG

����[0;1;32m��[1m@[1m��[1m��[1m��[1mi[1m��[1mj[1m��[1mU[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mu[1m��[1m@[1;36m��[1mE[1m��[1m@[1m��[1m��[1m��[1m@[1m��[1mC[1m��[1m@[1m��[1ms[1;32m��[1m@[1m��[1mv[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1mA[1;34m��[1ms[1m��[1mC[1m��[1mE[1m��[1m��[1;32m��[1mO[1m��[1mp[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mi[1m��[1m@[1m��[1m@[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1mH[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1mY[1m��[1m��[0m
[0;1;32m��[1mO[1m��[1mA[1m��[1mo[1m��[1mT[1m��[1me[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1me[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1mW[1m��[1m��[1;35m��[1m��[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
