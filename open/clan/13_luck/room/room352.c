inherit ROOM;
void create() {
	set( "short", "鱼龙室" );
	set( "owner", "max" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file6"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
		"file9"    : "/daemon/class/fighter/armband",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount9"  : 1,
		"amount1"  : 2,
		"file5"    : "/open/mogi/village/obj/mogi_ring",
		"amount2"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10170 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room351.c",
		"west"      : "/open/clan/13_luck/room/room350",
		"out"       : "/open/clan/13_luck/room/room347.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    一进入此室中，只见墙上挂着一把[0;1;33m□[1m□[1m□[1ms[0m(Ublade)，刀上刻着一些
细细小小的字，仔细看去原来是魔刀‘三斩归元’刀法之一，妳运用
九地之气，使出[35m【三斩归元～鱼龙嗜元】[0m‘[0;1;33m□[1m□[1;36m□[1ms[1;33m□[1mr[1;36m□[1m}[0m～～[0;1;33m□[1m□[1;35m□[1mP[1;32m□[1mO[1;31m□[1m□[0m’
秘咒语音犹在耳，霎那间，从[0;1;33m□[1m□[1m□[1ms[0m窜出九彩烟雾，瞬时边旁周围的生
物死之殆尽。[0;1;33m□[1mA[1m□[1mB[1m□[1m□[1m□[1m□[1m□[1mM[1m□[1mA[1m□[1mt[1m□[1m□[1m□[1mu[1m□[1m□[1m□[1mA[1m□[1mu[1m□[1m□[1m□[1mM[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mX[1m□[1mA[1m□[1m□[1m□[1mb[1m□[1m□[1m□[1mc[1m□[1mT[0m
[0;1;33m□[1m□[1m□[1mx[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mC[1m□[1mA[1m□[1ml[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mr[1m□[1m□[1m□[1mB[1m□[1m□[1m□[1m□[1m□[1mM[1m□[1mA[1m□[1mK[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mM[1m□[1mb[1m□[1m□[1m□[1mo[1m□[1mX[1m□[1m□[1m□[1mH[0m
[0;1;33m□[1mb[1m□[1mr[1m□[1mA[1m□[1m□[1m□[1mn[1m□[1m|[1m□[1m□[1m□[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
