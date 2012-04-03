inherit ROOM;
void create() {
	set( "short", "����¥" );
	set( "object", ([
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/ping/obj/gold_hand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"amount1"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "winona" );
	set( "build", 10872 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room42.c",
		"north"     : "/open/clan/13_luck/room/room160",
	]) );
	set( "long", @LONG

    ������ʮ������Ŀ�ջ��������ڵĴ�������߸�����һ��������
���ң���ͷд�š�����¥������������֣�������ҫ�£������ҫ�۵�
��⣬���ɫ�Ĵ��ſ��ţ����������Ż�����ʨͷ״���Ե����ɷǷ���
�����Ը�����һ���������������ʯʨ�ӡ�

LONG);
	setup();
	replace_program(ROOM);
}
