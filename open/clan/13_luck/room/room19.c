inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "mad" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/ping/obj/chilin_legging",
		"amount9"  : 1,
		"file9"    : "/open/ping/obj/iceger",
		"file7"    : "/open/ping/obj/ring-2",
		"amount2"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/ping/obj/iceger",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/ping/obj/chilin_legging",
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
	]) );
	set( "build", 13842 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room18.c",
		"up"        : "/open/clan/13_luck/room/room20",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������������֮�󿴵�����ɫ�Ľ��������������죬����һ������
�����ֱ�ɶ�ȥ���������������ʿ�������ž;���ͨ������ĵط���
����Ҫ֮�أ�����ÿһ���˶������վ���ţ������а�������ͨ��֤��
��Ȼ��Ӳ�����׼��Ѫ�������ɡ�

LONG);
	setup();
	replace_program(ROOM);
}
