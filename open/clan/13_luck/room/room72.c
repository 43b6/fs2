inherit ROOM;
void create() {
	set( "short", "���˾�" );
	set( "owner", "binch" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room133",
	]) );
	set( "object", ([
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount1"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
		"amount4"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "item_desc", ([
		"n" : @ITEM
,
ITEM,
	]) );
	set( "build", 10643 );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1m��[1me[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1me[1m��[1m@[1m��[1mG[1m��[1mA[1m��[1m|[1m��[1mP[0;1;5;31;43m��[1;5mj[1;5m��[1;5m��[0;1;37;40m��[1m��[1m��[1m��[1m��[1mU[1m��[1m_[1m��[1mA[1m��[1mw[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1me[0m
[0;1;37m��[1mF[1m��[1mC[1m��[1m��[1m��[1mb[0;1;5;31;43m��[1;5mj[1;5m��[1;5m��[0;1;37;40m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1m@[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1mk[1m��[1mA[1;33m��[1m��[1m��[1mO[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mQ[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1mk[1;37m��[1mA[1m��[1m��[1m��[1mD[1m��[1mo[1m��[1mO[1;45m��[1m_[1m��[1mj[1m��[1m`[1m��[1m��[1;40m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1mk[1;37m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mo[0m
[0;1;37m��[1m��[1m��[1mk[1m��[1mH[1m��[1mO[1m��[1m��[1m��[1m~[1m��[1me[1m��[1m��[1;36m��[1mt[1m��[1m��[1m��[1mg[1m��[1mH[1;37m��[1mA[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1m��[1m��[1mo[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mB[1m��[1mW[1m��[1mF[0m
[0;1;37m��[1m��[1m��[1mY[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
