inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "vickey" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file6"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
		"file7"    : "/open/gsword/obj/ring-1",
		"amount5"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"file2"    : "/open/ping/obj/ring-2",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room268",
	]) );
	set( "build", 10455 );
	set( "light_up", 1 );
	set( "long", @LONG

    ���ߣ�����֮���ߣ������е������ɣ�ħ�����𵶣��������˲�
֪��ǿ�����ɣ����Ϻõ������ǵ���Ӧ�֣�ս�޲�ʤ�����Դ�Ѻõ���
�Ĳ����ף���Ϊ̫�Ѵ��ˣ���ʱ�����Ҳ��������˭�������׼��ȥ��
�Ѻõ�������ϣ������ϧ��

LONG);
	setup();
	replace_program(ROOM);
}
