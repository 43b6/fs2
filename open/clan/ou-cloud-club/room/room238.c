inherit ROOM;
void create() {
	set( "short", "$HIB$���$HIG$ȭ$HIW$��$NOR$" );
	set( "object", ([
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
	]) );
	set( "build", 10160 );
	set( "light_up", 1 );
	set( "owner", "nickm" );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room195",
	]) );
	set( "long", @LONG

$HIC$�������

$HIW$    �����ɲ����$CYN$���ָ���$HIW$��������ʹ�õ���ʽ��Ϊ���գ������д���ֵĹ��ã��磺
$MAG$��ס���֣�$BLU$��ȡ���˹�����$RED$�����������$HIW$�ȣ�����˵���൱�񶾵��Ʒ���Ҳ��Ϊ��ѧ��
$HIW$�����Ʒ�����Ҫ���൱��$HIR$ɱ��$HIW$���������������������⹦�ñ���Ҫ����$HIC$��ħ��$HIW$����
$HIW$��Ч��$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
