inherit ROOM;
void create() {
	set( "short", "һ���Ӵ�����" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10473 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
һ���Ӵ�����..ΪӦ�����ŵĽ���״����������..���˿���
������˻�����������춾..���Ҫ�����֮��Ҫ���Ϸ������
..һ�����ڲ��������κεط�..����ʱ��Ҫ��..����Ҫȫ����װ
�����������豸..��Ҫ����..�����ŵĽ���״����Ҫ��������..
�˹����Ҫ���徯���Ż�ս����������..
LONG);
	setup();
	replace_program(ROOM);
}
