inherit ROOM;
void create() {
	set( "short", "���ⶨ��¥" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 14901 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room180",
		"down"      : "/open/clan/13_luck/room/room162.c",
	]) );
	set( "long", @LONG

    [0;1;33m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mX[1m��[1m{[1m��[1m��[1m��[1m��[1m��[1m_[1m��[1mH[1m��[1m@[1m��[1m��[1;36m��[1mH[1m��[1m��[1m��[1mP[1;37m��[1m@[1m��[1m��[1;32m��[1ms[1;37m��[1mA[1m��[1mb[1m��[1mQ[1m��[1mT[1m��[1mN[0m
[0;1;37m��[1m��[0m����֮�����ٷϴ��ˣ���ʱ���ɴ����˰���ʮ�����������������
����������������ɾ������ڵ�ʮ�����飬���������ڹ��ɺ������
�ˣ�����Ұ�ײ��ܰ��񣬶������ǵĳɾͽ��ǰ��ڽ��������ġ� 

LONG);
	setup();
	replace_program(ROOM);
}
