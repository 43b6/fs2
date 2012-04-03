inherit ROOM;
void create() {
	set( "short", "С�ϼ�ǰ��" );
	set( "owner", "son" );
	set( "light_up", 1 );
	set( "object", ([
		"amount4"  : 100,
		"amount5"  : 100,
		"file2"    : "/open/fire-hole/obj/w-pill",
		"file4"    : "/open/fire-hole/obj/r-pill",
		"amount7"  : 100,
		"file6"    : "/open/fire-hole/obj/y-pill",
		"file8"    : "/open/fire-hole/obj/k-pill",
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount3"  : 100,
		"amount6"  : 100,
		"amount1"  : 9,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 100,
		"file5"    : "/open/fire-hole/obj/g-pill",
		"file7"    : "/open/fire-hole/obj/p-pill",
		"amount8"  : 100,
	]) );
	set( "build", 10020 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room70",
		"west"      : "/open/clan/13_luck/room/room69.c",
		"east"      : "/open/clan/13_luck/room/room68.c",
		"out"       : "/open/clan/13_luck/room/room66.c",
	]) );
	set( "long", @LONG

[0;1m��[1m@[1m��[1m@[1;37m��[1mw[1m��[1m��[1;33m��[1mz[1;37m��[1m��[1m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1;36m��[1m��[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m@[1m��[1m_[1m��[1m��[1m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1m~[1;37m��[1mA[1;37m��[1m��[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1mF[1;34;47m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37;40m��[1m��[1m��[1mL[1m��[1mp[1m��[1m��[1m��[1ml[1m��[1mA[1m��[1mO[1m��[1m��[1;30m��[1m��[1m��[1ma[1m��[1mH[1;37m��[1mT[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;33m��[1m��[1;31m��[1m��[0m
[0;1;34m��[1m��[1;31m��[1m��[1;30m��[1mg[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mu[1m��[1m��[1;37m��[1mA[1m��[1ml[1m��[1mJ[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mX[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1mE[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1ml[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mC[0m


[0;1;34m��[1mp[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m


LONG);
	setup();
	replace_program(ROOM);
}
