inherit ROOM;
void create() {
	set( "short", "-����-" );
	set( "owner", "andy" );
	set( "object", ([
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"file6"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount10" : 1,
		"amount1"  : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/gsword/obj/may_ring",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount3"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10178 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room73",
	]) );
	set( "long", @LONG
����ANDY�Ŀ��������ܳ���һ��ɳ��֮�⣬û���κεİ��裬
��������������Լ������ڹ��Լ�ѩ���ڹ��ĵȼ���Ϊ�ľ�������
����ĸ�ǿ��Ŭ�����ţƣ��е�һ���ߵĳƺ�����......��������
��ƴ����Ŭ�����������Դ��Ŀ��Ϊ����


LONG);
	setup();
	replace_program(ROOM);
}
