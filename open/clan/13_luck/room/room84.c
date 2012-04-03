inherit ROOM;
void create() {
	set( "short", "��а��" );
	set( "owner", "asfd" );
	set( "object", ([
		"file3"    : "/open/capital/obj/blade2",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount3"  : 1,
		"file4"    : "/open/killer/obj/dagger",
		"file9"    : "/open/killer/obj/s_pill",
		"amount1"  : 1,
		"file7"    : "/open/killer/weapon/k_torch",
		"amount7"  : 1,
		"amount2"  : 1,
		"amount9"  : 140,
		"file10"   : "/open/scholar/obj/icefan",
		"amount4"  : 1,
	]) );
	set( "build", 10112 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room83.c",
		"east"      : "/open/clan/13_luck/room/room263",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

[0;1;36m [1m [1m [1m [1m��[1mj[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1m|[1m��[1m��[1m��[1m��[1m��[1mO[1;37m��[1mB[1m��[1ma[1;36m��[1mA[1m��[1mj[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[0m
[0;1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mX[1m��[1ma[1m��[1mg[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mB[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[0m
[0;1;36m��[1mp[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;31m��[1mx[1m��[1mx[1m��[1m��[1m��[1m��[1;36m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m_[1m��[1mF[1m��[1mt[1m��[1m@[1m��[1mf[1m��[1m��[1m��[1mH[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1m@[1m��[1my[0m
[0;1;36m��[1mj[1m��[1mB[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mr[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1mu[0;1;5;35;44m��[1;5mF[1;5m��[1;5m��[1;5m��[1;5m~[0;1;36;40m��[1mv[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
