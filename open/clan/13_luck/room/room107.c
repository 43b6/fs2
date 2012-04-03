inherit ROOM;
void create() {
	set( "short", "����װ����" );
	set( "owner", "son" );
	set( "object", ([
		"file5"    : "/daemon/class/blademan/obj/gstone",
		"amount7"  : 1,
		"file6"    : "/daemon/class/blademan/obj/wastone",
		"amount4"  : 100,
		"amount6"  : 1,
		"file3"    : "/daemon/class/blademan/obj/hstone",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file1"    : "/daemon/class/blademan/obj/estone",
		"file7"    : "/daemon/class/blademan/obj/fstone",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount3"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file2"    : "/daemon/class/blademan/obj/wstone",
	]) );
	set( "light_up", 1 );
	set( "build", 10488 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room70",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1me[1m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1ms[1;37m��[1m��[1m��[1mA[1m��[1mo[1m��[1m{[1m��[1ms[1m��[1my[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mj[1m��[1mP[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1mM[1;31m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m`[1m��[1mB[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m([1;36m��[1mR[1m��[1m��[1m��[1m��[1;37m)[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mA[1m��[1mP[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m��[1mw[1m��[1m��[1m��[1md[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m\[1m��[1mO[1m��[1mF[1m��[1mA[1m��[1mG[1m��[1m��[1m��[1mo[1m��[1mw[1;32m��[1mp[1m��[1mn[1;37m��[1mu[1m��[1mn[1m��[1mB[0m
[0;1;37m��[1m_[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1m\[1m��[1mO[1m([1;34m��[1m��[1m��[1mQ[1m��[1m��[1m��[1m��[1;37m)[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1md[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mF[1;31m��[1m��[1m��[1m��[0m
[0;1;37m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1m][1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mb[1m��[1m|[1m��[1mC[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m_[1;31m��[1m��[1m��[1mO[1;37m��[1mC[1;32m [0m


[0;1;31m��[1mp[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m


LONG);
	setup();
	replace_program(ROOM);
}
