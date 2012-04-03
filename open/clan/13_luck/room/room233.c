inherit ROOM;
void create() {
	set( "short", "���ޱ���" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount10" : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
		"amount1"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/prayer/obj/boris-hat",
		"file10"   : "/open/ping/obj/chilin_legging",
		"amount6"  : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "owner", "wawaneko" );
	set( "build", 10230 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room97.c",
	]) );
	set( "long", @LONG
һ����ΰ׳�۵���Ժӳ��������̧ͷһ�����Ŷ�����һ��ľ����Ҷ
�������׺���д�š�[33m���ޱ���[0m���ĸ����֡�������д�����ǲԾ�������
�������嶨�������룺��������ֵ��ˣ���������ȫ�ŵĴ���ˡ��� 
��ǰ������һ�����˳������˸ߵĴ�ʯ�������Ͽ���������֣���[34m���µ�һ��[0m����

LONG);
	setup();
	replace_program(ROOM);
}
