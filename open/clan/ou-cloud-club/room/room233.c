inherit ROOM;
void create() {
	set( "short", "������ľ��" );
	set( "owner", "sunsword" );
	set( "object", ([
		"amount1"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"file5"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file7"    : "/open/killer/obj/k_ring",
		"file1"    : "/open/port/obj/wolf_ring",
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/ping/obj/cloud",
	]) );
	set( "build", 9055 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room148",
	]) );
	set( "long", @LONG
����Ʈ�ŵ����ĳ��㣬�����е�������������������������
���˵��㿴���Ǹ���ʱ����Ľ��ĺ�Ȼʧ�أ��þò���ƽϢ����
ʱ���˺�Ȼ̧ͷ����˵���������������������ǹɲ��������ɵ�
�����������ɼ����������˹�ȥ��

LONG);
	setup();
	replace_program(ROOM);
}
