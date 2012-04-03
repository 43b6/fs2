inherit ROOM;
void create() {
	set( "short", "�������Ҧ�" );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room18",
	]) );
	set( "build", 11520 );
	set( "owner", "son" );
	set( "object", ([
		"amount10" : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;33m��[1mp[1;37m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mZ[1m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mB[1m��[1mD[1m��[1mO[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m`[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1m��[0m
[0;1;33m��[1mp[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mQ[1m��[1mh[1m��[1mN[1m��[1mN[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mA[1m��[1m��[1;33m��[1mp[1;37m��[1ma[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m|[1m��[1mg[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;32m��[1mA[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1mp[1;37m��[1mA[1m��[1mj[1m��[1mj[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m��[0m
[0;1;33m��[1mp[1;37m��[1m��[1m��[1mo[1m��[1m��[1m��[1mh[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1;33m��[1mp[1;37m��[1m~[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mZ[1m��[1m��[1m��[1mO[1m��[1m��[1;35m��[1mF[1m��[1m��[1;37m��[1m��[1m��[1mD[0m

[0;1m [0m
[0;1;31m��[1mp[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m

LONG);
	setup();
	replace_program(ROOM);
}
