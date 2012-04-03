inherit ROOM;
void create() {
	set( "short", "$MAG$������$NOR$" );
	set( "object", ([
		"amount8"  : 58967,
		"amount10" : 1,
		"file1"    : "/daemon/class/fighter/figring",
		"amount3"  : 1,
		"file9"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"file8"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/gblade/obj/sa-head",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "owner", "bluefox" );
	set( "light_up", 1 );
	set( "build", 10034 );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room238.c",
		"east"      : "/open/clan/sky-wu-chi/room/room232",
		"up"        : "/open/clan/sky-wu-chi/room/room168.c",
		"west"      : "/open/clan/sky-wu-chi/room/room237.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG

        [0;1;32m��[1m��[1m��[1m��[1m��[1mn[1m��[1m_[1;37m [1m [1;34m��[1mK[1m��[1m��[1m��[1m��[1m��[1mN[1;37m [1m [1;33m��[1mC[1m��[1m��[1m��[1m`[1m��[1m��[1;37m [1m [1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37m [0m

[0;1m��[1m@[1m��[1m@[1;36m��[1m@[1m��[1m��[1m��[1mW[1m��[1mo[1m��[1ms[1m��[1mV[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1mV[1m��[1mA[1m��[1m��[1m��[1mR[1m��[1m��[0m
[0;1;36m��[1m��[1m��[1m^[1m��[1mB[1m��[1m@[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mW[1m��[1mA[1m��[1mO[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;36m��[1mh[1m��[1mA[1m��[1m��[1m��[1mF[1m��[1m��[1m��[1mV[1m��[1m~[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mS[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mV[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1m@[1m��[1m��[1m��[1mH[1m��[1mA[0m
[0;1;36m��[1m��[1m��[1mH[1m��[1m��[1m��[1mO[1;35m��[1mg[1m��[1ms[1;36m��[1mA[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1mW[1m��[1mi[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mj[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mB[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mm[1m��[1mZ[0m
[0;1;36m��[1m\[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m|[1m��[1mP[1m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mH[1m��[1mN[1m��[1mA[1m��[1mD[1m��[1m@[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mC[0m
LONG);
	setup();
	replace_program(ROOM);
}
