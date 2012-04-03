inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIC$��$NOR$" );
	set( "owner", "sunsword" );
	set( "object", ([
		"amount1"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"file3"    : "/open/love/obj/shield",
		"file5"    : "/open/love/obj/shield",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/clan/area/home/hae_bag",
		"file9"    : "/open/capital/obj/blade2",
		"file4"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"amount10" : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"file8"    : "/open/scholar/obj/s_hands",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/prayer/obj/boris-boots",
	]) );
	set( "light_up", 1 );
	set( "build", 23465 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room15.c",
		"east"      : "/open/clan/ou-cloud-club/room/room233",
	]) );
	set( "long", @LONG
[0;1;33m��[1m��[1mF[1mS[1m��[1m��[1m��[1m��[1m��[1md[1m��[1ms[1m��[1m@[1m��[1m~[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1mU[1m��[1mw[1m��[1mM[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[0m
[0;1;33m��[1mN[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mv[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mL[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;33m��[1m��[1m��[1mX[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mD[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m}[1m��[1mb[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mU[1m��[1mZ[1m��[1mL[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1m��[1m��[1mA[0m
[0;1;33m��[1mM[1m��[1mo[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1ms[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mA[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mU[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1mL[1m.[1m.[1m.[1m.[0m


LONG);
	setup();
	replace_program(ROOM);
}
