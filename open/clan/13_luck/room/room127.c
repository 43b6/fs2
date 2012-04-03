inherit ROOM;
void create() {
	set( "short", "С��ͷ�Ĵ���" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/fire-hole/obj/w-pill",
		"amount3"  : 20,
		"amount4"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/fire-hole/obj/b-pill",
		"amount10" : 1,
		"file2"    : "/open/fire-hole/obj/p-pill",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 13,
		"file5"    : "/open/fire-hole/obj/g-pill",
		"amount2"  : 7,
		"file7"    : "/open/killer/obj/k_ring",
		"file3"    : "/open/fire-hole/obj/k-pill",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount5"  : 48,
	]) );
	set( "light_up", 1 );
	set( "build", 10467 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room93.c",
		"north"     : "/open/clan/13_luck/room/room296.c",
		"south"     : "/open/clan/13_luck/room/room293",
		"east"      : "/open/clan/13_luck/room/room295.c",
		"west"      : "/open/clan/13_luck/room/room294.c",
	]) );
	set( "long", @LONG

    �����ǿɰ�С��ͷ�Ĵ����������Ϊ���ģ��ֱ��ж����ϱ��᷿
�������Ƕ��䷿����Ҫ�Ǵ���һ��ķ��ߣ�Ϊƽ��ս��֮�ã�������
�����᷿����Ҫ�Ǵ���һ���������Ϊƽ��ս��֮�ã��������Ǳ���
������Ҫ�Ǵ����ʽ������ҩƷ�����ϱ������᷿����Ҫ�Ǵ���һЩ
�����Ӱ˵���Ʒ��


LONG);
	setup();
	replace_program(ROOM);
}
