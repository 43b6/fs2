inherit ROOM;
void create() {
	set( "short", "С�ϼ�����" );
	set( "object", ([
		"amount9"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_boots",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/magic-manor/obj/evil-kill-claw",
		"file7"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount7"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_belt",
		"amount5"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/ping/questsfan/obj/diamond_legging",
		"file5"    : "/open/ping/questsfan/obj/diamond_cloak",
		"file3"    : "/open/ping/questsfan/obj/diamond_armor",
	]) );
	set( "owner", "son" );
	set( "build", 10719 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room67.c",
		"east"      : "/open/clan/13_luck/room/room107.c",
		"west"      : "/open/clan/13_luck/room/room285",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mp[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m@[1m��[1m��[1;36m��[1m@[1m��[1m~[1m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1m��[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1mO[1;37m��[1mA[1m��[1mo[1m��[1m|[1m��[1mP[0m
[0;1;37m��[1mR[1m��[1m��[1m��[1mF[1;33m��[1m��[1m��[1mM[1m��[1mC[1m��[1m��[1m��[1mx[1;37m��[1m��[1m��[1m��[1m��[1m^[1m��[1mA[1m��[1m|[1m��[1mP[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1mF[1m��[1mg[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1mT[1;37m��[1m`[1m��[1m`[1m��[1m��[1m��[1ml[1m��[1mF[1m��[1m@[0m
[0;1;37m��[1mf[1m��[1m��[1m��[1mA[1m��[1ml[1m��[1mJ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1m��[1;37m��[1mP[1;32m��[1m��[1m��[1mO[1;37m��[1mA[1m��[1mN[1m��[1m��[1m��[1mF[1m��[1m@[1m��[1m��[0m
[0;1;37m��[1ma[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1mB[1m��[1m��[1;31m��[1m��[1m��[1mO[1;37m��[1mA[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mv[1m��[1m��[1;31m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1;37m��[1mW[1m��[1mi[1m��[1mF[1m��[1m��[1m��[1m��[1;37m��[1mC[0m


[0;1;34m��[1mp[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m


LONG);
	setup();
	replace_program(ROOM);
}
