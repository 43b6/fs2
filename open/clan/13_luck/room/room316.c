inherit ROOM;
void create() {
	set( "short", "�����������" );
	set( "object", ([
		"amount3"  : 1,
		"amount9"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/port/obj/wolf_ring",
		"file4"    : "/open/prayer/obj/kylin-belt",
		"file7"    : "/open/ping/obj/ring-2",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/badman/obj/evil_claw",
		"file6"    : "/open/badman/obj/badhelmet",
		"file3"    : "/open/prayer/obj/boris-hands",
		"file9"    : "/open/firedancer/npc/eq/r_pants",
		"amount6"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_belt",
		"amount5"  : 1,
	]) );
	set( "build", 10023 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room304",
	]) );
	set( "long", @LONG

    ������[0;1;31m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1m��[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
�Ȼݴ������������㷶��ʮ����ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
