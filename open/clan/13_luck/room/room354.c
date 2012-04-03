inherit ROOM;
void create() {
	set( "short", "�ƿ�" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/ping/obj/chilin_legging",
		"file5"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"amount8"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/daemon/class/blademan/obj/ublade",
		"amount1"  : 1,
	]) );
	set( "build", 10209 );
	set( "owner", "ckn" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room71",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �������һ��Ʈ����������ǰ����һƬ���ʣ�����ϸ��ȴ���ֿ�
�����Գ���������ϵȴ������İ��Σ��������룬��ʵ�������а�
�������С��������㾪�ȵ���ǰ�����ʯ���Ͼ�Ȼ������һ�������
����˼���ε�������

LONG);
	setup();
	replace_program(ROOM);
}
