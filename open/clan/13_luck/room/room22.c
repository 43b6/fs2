inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file6"    : "/open/ping/obj/ring-2",
		"file8"    : "/obj/gift/shenliwan",
		"file4"    : "/open/ping/obj/gold_hand",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"file10"   : "/open/port/obj/wolf_ring",
		"amount10" : 1,
		"file7"    : "/open/ping/obj/ring-2",
	]) );
	set( "owner", "mad" );
	set( "build", 10245 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room23",
		"down"      : "/open/clan/13_luck/room/room21.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    һ̤��¥�ݵ����һ�������������ظ��ĸо������ĸոյ����඼
ֵ���ˣ���Ϊ�㼴����������ʮ������֮������������һ��Ľ��ţ���
�˷ܵ��������ʤ��������Ȼ���������ͻ�ͷ����ͻ���һ������
ǰ�߾����������

LONG);
	setup();
	replace_program(ROOM);
}
