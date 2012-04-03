inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$$HIM$��$NOR$$YEL$��$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"amount5"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"file10"   : "/obj/gift/bingtang",
		"amount8"  : 1,
		"amount3"  : 1,
		"file6"    : "/obj/gift/unknowdan",
		"amount9"  : 1,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 9,
		"amount7"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file5"    : "/obj/gift/unknowdan",
		"file8"    : "/obj/gift/shenliwan",
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "light_up", 1 );
	set( "build", 10417 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room90.c",
		"home"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "long", @LONG

[0;1m��[1mo[1m��[1m��[1m��[1mO[1m��[1m@[1m��[1m��[1m��[1mT[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mN[1m��[1mO[0m
[0;1m��[1m@[1m��[1m��[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mA[1m��[1mu[1m��[1mO[1m��[1mo[1m��[1m��[1m��[1m@[1m��[1m��[1;35m��[1mH[1m��[1m��[1m��[1mP[1m��[1m��[1;37m��[1m��[1m��[1m��[0m
[0;1m��[1m|[1m��[1m��[1m��[1mW[1m��[1ms[1;31m��[1m��[1;35m��[1m��[1;33m��[1m��[1;37m��[1mA[1m��[1mO[1m��[1m_[1m��[1m��[1m��[1ma[1m��[1mD[1m��[1mH[1m��[1m��[1m��[1m@[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[0m
[0;1m��[1m��[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mO[1m?[0m


LONG);
	setup();
	replace_program(ROOM);
}
