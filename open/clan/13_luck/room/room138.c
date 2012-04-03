inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "owner", "son" );
	set( "object", ([
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/castle/obj/ninepill",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount3"  : 1,
		"amount8"  : 3,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10335 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room136.c",
		"enter"     : "/open/clan/13_luck/room/room139",
	]) );
	set( "long", @LONG

����[0;1;32m��[1m@[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1mY[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1mX[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1m��[1m��[1m��[0m
[0;1;32m��[1mA[1m��[1ml[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mH[1m��[1mH[1m��[1m��[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mO[1m��[1mH[1;33m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1my[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mM[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1;34m��[1m][1m��[1m��[1;32m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1;32m��[1m��[1m��[1mW[1m��[1m��[1;35m��[1m��[0m
[0;1;35m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1;31m��[1m}[1m��[1m@[1m��[1m��[1m��[1m_[1;32m��[1mC[0m 

LONG);
	setup();
	replace_program(ROOM);
}
