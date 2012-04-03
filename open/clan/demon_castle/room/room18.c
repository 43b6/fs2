inherit ROOM;
void create() {
	set( "short", "��С�ϼ�ǰ����" );
	set( "object", ([
		"amount1"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"amount3"  : 1,
		"file5"    : "/open/capital/obj/4-4",
		"amount5"  : 1,
		"file4"    : "/open/magic-manor/obj/wood-ball",
		"amount4"  : 1,
		"file1"    : "/open/magic-manor/obj/soil-ball",
	]) );
	set( "build", 10270 );
	set( "owner", "son" );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room14.c",
		"out"       : "/open/clan/demon_castle/room/room7.c",
		"north"     : "/open/clan/demon_castle/room/room4",
		"west"      : "/open/clan/demon_castle/room/room16.c",
	]) );
	set( "long", @LONG

[0;1m��[1m@[1m��[1m@[1;37m��[1mw[1m��[1m��[1;33m��[1mz[1;37m��[1m��[1m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1;36m��[1m��[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m@[1m��[1m_[1m��[1m��[1m��[1m��[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1m~[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1mF[1;34;47m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37;40m��[1m��[1m��[1mL[1m��[1mp[1m��[1m��[1m��[1ml[1m��[1mA[1m��[1mO[1m��[1m��[1;30m��[1m��[1m��[1ma[1m��[1mH[1;37m��[1mT[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m��[1;33m��[1m��[1;31m��[1m��[1;34m��[1m��[1;31m��[1m��[1;30m��[1mg[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;36m��[1mu[1m��[1m��[1;37m��[1mA[1m��[1ml[1m��[1mJ[1;32m��[1mp[1m��[1mn[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mX[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1mE[1m��[1mM[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ml[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mC[0m


[0;1;34m��[1mp[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m

LONG);
	setup();
	replace_program(ROOM);
}
