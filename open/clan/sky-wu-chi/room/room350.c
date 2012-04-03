inherit ROOM;
void create() {
	set( "short", "����ר������" );
	set( "owner", "borkiller" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 17834,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file8"    : "/open/killer/obj/hate_knife",
		"amount9"  : 1,
		"file4"    : "/open/killer/obj/black",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount8"  : 11041,
		"amount5"  : 1,
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/obj/hate_knife",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 74,
		"amount7"  : 1,
		"file2"    : "/obj/gift/xisuidan",
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "light_up", 1 );
	set( "build", 10140 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room315",
	]) );
	set( "long", @LONG

[0;1;35m��[1m��[1m��[1m��[1m��[1m��[0m

[0;1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1mh[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m][1m��[1m��[1m��[1mA[1m��[1mH[1m��[1mb[1m��[1m`[1m��[1m`[1m��[1mB[1m��[1mC[0m
[0;1;35m��[1m��[1m��[1m��[1m��[1mK[1m��[1mY[1m��[1m��[1m��[1mX[1m��[1m\[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1mB[1m��[1mC[0m
[0;1;35m��[1m��[1m��[1m��[1m��[1mI[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m\[1m��[1mA[1m��[1mJ[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mo[1m��[1m}[1m��[1mK[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;35m��[1m��[1m��[1mP[1m��[1mS[1m��[1mN[1m��[1mk[1m��[1mH[1m��[1m~[1m��[1mA[1m��[1mp[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
