inherit ROOM;
void create() {
	set( "short", "����ˮ��" );
	set( "object", ([
		"amount5"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/ping/obj/gold_hand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/ping/obj/ring-2",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
	]) );
	set( "owner", "amdmp" );
	set( "build", 10782 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room29",
		"north"     : "/open/clan/13_luck/room/room27.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����ˮ����ʮ�����������Ҫ��ͨ���������ģ��뵽ʮ���������
��һ��Ҫ�����������ˮ�����������Կ��������Ĵ�ֻ�������ϵ���
�Ƕ����յ�����ˮ��֮�ã�����·����ʱ�����Կ������������ŵ��㣬
������⣬����ǰ�߾ͻ��߽����������֡�

LONG);
	setup();
	replace_program(ROOM);
}
