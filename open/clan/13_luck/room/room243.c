inherit ROOM;
void create() {
	set( "short", "���両��¥" );
	set( "object", ([
		"file2"    : "/open/firedancer/npc/eq/r_shield",
		"file1"    : "/open/firedancer/npc/eq/r_leg",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/firedancer/npc/eq/r_neck",
		"amount1"  : 1,
		"file3"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10779 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room244",
		"up"        : "/open/clan/13_luck/room/room242",
	]) );
	set( "long", @LONG

    �˼�Ϊ����ǰ����͸ɱ����������...
[0;1;32m��[1mX[1m��[1m��[1m��[1mb[1m��[1mh[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mh[1m��[1mF[1m��[1mC[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;32m��[1mP[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1mA[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mP[1m��[1mC[1m��[1mY[1m��[1mm[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m_[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;32m��[1mi[1m��[1mH[1m��[1mR[1m��[1mO[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1mL[1m��[1mx[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mL[1m��[1m[[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;32m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1mC[0m           
            �����ƣ�[0;1;5;31m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m~[1;5m��[1;5m��[0m��

LONG);
	setup();
	replace_program(ROOM);
}
