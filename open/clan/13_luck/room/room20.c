inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "mad" );
	set( "object", ([
		"file10"   : "/open/scholar/obj/icefan",
		"file4"    : "/open/wu/npc/obj/armband",
		"amount9"  : 1,
		"file7"    : "/open/killer/obj/k_ring",
		"file9"    : "/daemon/class/blademan/obj/ublade",
		"amount2"  : 1,
		"amount10" : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/scholar/obj/icefan",
		"file2"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/ping/obj/iceger",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 16398 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room19.c",
		"up"        : "/open/clan/13_luck/room/room21",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��������֮��������һ���Ѿ���غü��ɣ�����������ⱻϮ����
���Ǻ��ѻ����ģ�������һ���ܾ��õĺܳ���Զ��ô��Ҳ�����꣬����
�㵹��������һ����ͷ�ķ羰�����Կ���Ư��������Ȫ��Ҳ���Կ���ѩ
�׵���ɽ�������û�������͵ģ���������ɹ���εĽ�֮�á�

LONG);
	setup();
	replace_program(ROOM);
}
