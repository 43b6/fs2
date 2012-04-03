inherit ROOM;
void create() {
	set( "short", "��ң�˼��" );
	set( "object", ([
		"file9"    : "/open/firedancer/npc/eq/r_head",
		"amount8"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/firedancer/npc/eq/r_shield",
		"file7"    : "/open/firedancer/npc/eq/r_cape",
		"amount9"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_boots",
		"amount4"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_neck",
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_pants",
		"amount7"  : 1,
		"file10"   : "/open/firedancer/npc/eq/r_cloth",
		"file5"    : "/open/firedancer/npc/eq/r_belt",
		"file8"    : "/open/firedancer/npc/eq/r_hands",
		"amount5"  : 1,
		"file4"    : "/open/firedancer/npc/eq/r_armbands",
	]) );
	set( "build", 10320 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room162",
		"south"     : "/open/clan/13_luck/room/room165.c",
	]) );
	set( "long", @LONG

����[0;1;32m��[1m��[1m��[1mD[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mD[1m��[1m��[1m��[1mj[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mR[1m��[1mW[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mA[1m��[1mj[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1mg[1m��[1m`[1m��[1mh[1m��[1m��[1m��[1md[1m��[1m~[1m��[1m��[1m��[1m��[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mO[1m��[1mD[1m��[1mE[1m��[1m��[1m��[1m��[1m��[1m][0m
[0;1;32m��[1m|[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1mF[1m��[1mA[1m��[1mh[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m|[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m@[1m��[1mO[1m��[1mA[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ml[1m��[1m��[1m��[1mF[1m��[1mC[1m��[1m��[1m��[1mk[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mh[1m��[1mF[1m.[1m.[0m

LONG);
	setup();
	replace_program(ROOM);
}
