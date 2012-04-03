inherit ROOM;
void create() {
	set( "short", "�ؾ���" );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/snow/obj/book",
		"amount9"  : 1,
		"file6"    : "/open/dancer/obj/magicbook",
		"file2"    : "/open/gblade/obj/blade-book",
		"file4"    : "/open/wu/obj/haoforce_book",
		"file5"    : "/open/ping/obj/linpo_book",
		"file3"    : "/open/snow/obj/book",
		"file7"    : "/open/marksman/obj/book",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"amount1"  : 1,
		"file9"    : "/open/tendo/obj/book",
		"file8"    : "/open/gblade/obj/book",
	]) );
	set( "build", 10121 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room136.c",
		"up"        : "/open/clan/13_luck/room/room143",
	]) );
	set( "long", @LONG

����[0;1;32m��[1m@[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mY[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mW[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1me[1m��[1mA[1m��[1mW[1m��[1mY[1m��[1mg[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[0m
[0;1;32m��[1mj[1m��[1m��[1m��[1mu[1;35m��[1mR[1;32m��[1mv[1m��[1mr[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1m\[1m��[1m��[1m��[1m][1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mq[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m@[1m��[1mI[1m��[1m][1m��[1mS[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mU[0m
[0;1;32m��[1mi[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mP[1m��[1mC[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m@[1m��[1mU[1m��[1m��[1m��[1mA[1m��[1mN[1m��[1mO[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1mZ[1m��[1mL[1m��[1mh[1m��[1m��[1m��[1m��[1m��[1mZ[1m��[1m\[1m��[1mA[1m��[1m][1m��[1mi[1m��[1mb[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1;34m��[1m��[1m��[1mD[1m��[1m��[1m��[1mk[0m��

LONG);
	setup();
	replace_program(ROOM);
}
