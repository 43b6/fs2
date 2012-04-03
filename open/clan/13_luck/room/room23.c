inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"file10"   : "/open/mogi/village/obj/mogi_ring",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/scholar/obj/icefan",
		"file5"    : "/open/ping/obj/iceger",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"amount8"  : 1,
		"file1"    : "/open/prayer/obj/kylin-belt",
		"amount3"  : 1,
		"file3"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "owner", "mad" );
	set( "build", 14475 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room24",
		"south"     : "/open/clan/13_luck/room/room22.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �������������������ɫ�ĵ�̺�����������ͬ�ߵĸо����ڵ�̺
������վ����������������������������������������˴�����ʵ����
��Ҳ���Գ�Ϊ�����ţ���Ϊ��ӻʳ��������Ͽ���������ǹ����ƶ���
�����š�

LONG);
	setup();
	replace_program(ROOM);
}
