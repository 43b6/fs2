inherit ROOM;
void create() {
	set( "short", "С��ͷ�ı��᷿" );
	set( "object", ([
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file6"    : "/open/killer/obj/k_ring",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/capital/obj/blade2",
	]) );
	set( "owner", "pighead" );
	set( "build", 10491 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����ǿɰ�С��ͷ�ı��᷿�������Ҫ�Ǵ���һЩ��Ҫ��ҩƷ��
�����ת�����裬��ɫ����ҩ�裬������ս���в���ȱ����ҩƷ����
��û�����ǣ�����Ҫ��εֿ�����ռ��еı�̬�����������Ĵ�
�ŵ�ҩƷ���Ǻ����ġ�

LONG);
	setup();
	replace_program(ROOM);
}
