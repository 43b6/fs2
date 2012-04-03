inherit ROOM;
void create() {
	set( "short", "��¥�ؾ���" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mogi/castle/obj/fire_book",
		"file9"    : "/open/tendo/obj/book2",
		"file2"    : "/open/capital/obj/stabber_book",
		"file8"    : "/open/badman/obj/sword_book",
		"amount5"  : 1,
		"file7"    : "/open/gblade/obj/dragon_book",
		"file4"    : "/open/scholar/obj/book",
		"file6"    : "/open/doctor/obj/curebook",
		"amount8"  : 1,
		"file1"    : "/open/center/obj/gamble_book",
		"amount1"  : 1,
		"file5"    : "/open/gsword/obj/sword_book",
		"amount9"  : 1,
	]) );
	set( "build", 10620 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room141",
	]) );
	set( "long", @LONG

����[0;1;32m��[1m��[1m��[1ma[1m��[1m��[1m��[1m��[1m��[1mt[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1mA[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mG[1m��[1m��[1m��[1m��[0;33m�ؾ�[0m
[33m��[0;1;32m��[1mC[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1m\[1m��[1m��[1m��[1m][1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m@[1m��[1mI[1m��[1m][1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1mi[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mA[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mP[1m��[1mC[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m@[1m��[1mU[1m��[1m��[1m��[1mA[1m��[1mN[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mL[1m��[1mh[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mZ[1m��[1m\[1m��[1mA[1m��[1m][1m��[1mi[1m��[1mb[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1mD[1m��[1m��[1m��[1mk[0m��

LONG);
	setup();
	replace_program(ROOM);
}
