inherit ROOM;
void create() {
	set( "short", "��С�ϼ����Ȧ�" );
	set( "owner", "son" );
	set( "build", 10007 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room17",
		"south"     : "/open/clan/demon_castle/room/room18.c",
		"west"      : "/open/clan/demon_castle/room/room21.c",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mp[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m@[1m��[1m��[1;36m��[1m@[1m��[1m~[1m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1m��[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1mR[1m��[1m��[1m��[1mF[1;33m��[1m��[1m��[1mM[1m��[1mC[1m��[1m��[1m��[1mx[1;37m��[1m��[1m��[1m��[1m��[1m^[1m��[1mA[1m��[1m|[1m��[1mP[1m��[1m��[1m��[1mR[1m��[1m��[1m��[1mF[1m��[1mg[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1mT[1m��[1m`[1m��[1m`[1m��[1m��[1m��[1ml[1m��[1mF[1m��[1m@[0m
[0;1;37m��[1mf[1m��[1m��[1m��[1mA[1m��[1ml[1m��[1mJ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1m��[1;37m��[1mP[1;32m��[1m��[1m��[1mO[1;37m��[1mA[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1ma[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1mB[1m��[1m��[1;31m��[1m��[1m��[1mO[1;37m��[1mA[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mv[1m��[1m��[1;31m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1;37m��[1mW[1m��[1mi[1m��[1mF[1m��[1m��[1m��[1m��[1m��[1mC[0m


[0;1;34m��[1mp[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1mp[1m��[1m|[1m��[1mP[0m

LONG);
	setup();
	replace_program(ROOM);
}
