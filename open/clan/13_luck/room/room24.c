inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/ping/obj/iceger",
		"amount5"  : 1,
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount1"  : 1,
		"file5"    : "/obj/gift/xisuidan",
		"file9"    : "/open/prayer/obj/boris-boots",
		"file2"    : "/data/autoload/killer/reko_sword",
		"amount7"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"amount3"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file7"    : "/open/prayer/obj/kylin-belt",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "mad" );
	set( "build", 18595 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room25",
		"south"     : "/open/clan/13_luck/room/room23",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ���������㷢�������Ŀղ����ˣ��������Ϊ�ĵƻ�ʱ���������
�ǲ���Ҫ���ˣ��������ܾ�����ɭ�ϣ���׼�����Ż����룬����һ�ῴ
��������������Ǿ��ǰ��ߴ���֮��һ���������㽫��Ŀ�ô���֮
����Ŀ�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
