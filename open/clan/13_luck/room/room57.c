inherit ROOM;
void create() {
	set( "short", "ͣ�Bʬ�B��" );
	set( "object", ([
		"amount10" : 1,
		"file4"    : "/open/main/obj/et_sword",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 4,
		"amount4"  : 1,
		"amount7"  : 2,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "build", 10047 );
	set( "owner", "mygod" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room53",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
һ��[0;1;37m��[1m{[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mD[0m�˱Ƕ������������ܣ�����[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m�����а�
����[0;1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[0m��[0;1;31m��[1mI[1m��[1m��[1m��[1m][1m��[1m��[1m��[1m��[1m��[1mH[1m��[1mY[0m��[0;1;33m��[1mR[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m��[0;1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;36m��[1m��[1m��[1m��[0m��[0;1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m��[0;1;31m��[1m��[1m��[1mt[1m��[1m��[1m��[1m��[0m�������㿴�ĳ���[0;1;37m��[1m��[1m��[1mM[1m��[1mI[0m�㷢����
��[0;1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m��������űߣ���һ����[0;1;37m��[1mN[1m��[1mO[1m��[1mA[1m��[1m��[1m��[1mv[1m��[1mI[0m�ŵ��㵱����[0;1;37m��[1m��[0m
[0;1;37m��[1m��[1m��[1mt[1m��[1mX[1m��[1m��[1m��[1mF[0m��������޷�������������ʵ��[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mL[1m��[1mh[0m��

[0;1;31m��[1mA[1m��[1m��[1m��[1m��[1m��[1me[1m��[1m@[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m][1m��[1m��[1m��[1m��[1m��[1mD[1m��[1mF[1m.[1m.[1m.[1m.[0m





LONG);
	setup();
	replace_program(ROOM);
}
