inherit ROOM;
void create() {
	set( "short", "�����������" );
	set( "object", ([
		"file9"    : "/open/killer/obj/dagger",
		"amount1"  : 7338,
		"file1"    : "/open/killer/obj/lustar",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/mogi/castle/obj/leave",
		"file3"    : "/open/mogi/castle/obj/fire_book",
		"file8"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "owner", "pigdevil" );
	set( "build", 10122 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room305",
	]) );
	set( "long", @LONG

    ������[0;1;32m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1m��[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ���˾�
����ǧ��ï����ӡ���ð�ҵ�ˣ�ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
