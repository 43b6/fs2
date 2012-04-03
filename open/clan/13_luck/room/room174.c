inherit ROOM;
void create() {
	set( "short", "��ƫ��" );
	set( "object", ([
		"amount7"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10476 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room139.c",
		"north"     : "/open/clan/13_luck/room/room173",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1m��[1mo[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1;34m��[1m][1m��[1mO[1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1m��[1mp[1m��[1mG[1m��[1mN[1m��[1m��[1m��[1mv[1m��[1m��[1;31m��[1m��[1m��[1ml[1;32m��[1m��[1m��[1mJ[1;35m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1mA[1m��[1mN[1m��[1m|[1m��[1m��[1m��[1m_[1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m|[1m��[1mo[1m��[1m��[0m
[0;1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1mf[1m��[1mP[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1mv[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1mA[1m��[1mN[1m��[1m��[0m
[0;1m��[1m_[1;35m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1mN[1;31m��[1m��[1m��[1ml[1;32m��[1m��[1m��[1mJ[1;35m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1mA[1m��[1m@[1m��[1m}[1;33m��[1mG[1m��[1m��[1;32m��[1ml[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1m}[1m.[1m.[1m.[1m.[0m

LONG);
	setup();
	replace_program(ROOM);
}
