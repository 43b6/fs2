inherit ROOM;
void create() {
	set( "short", "�ٲݵ�" );
	set( "owner", "smalloo" );
	set( "object", ([
		"amount4"  : 1,
		"file5"    : "/open/capital/obj/chen_dagger",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/ping/obj/ring-2",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/killer/obj/s_pill",
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
	]) );
	set( "build", 11610 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room337",
		"north"     : "/open/clan/13_luck/room/room339.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��ͻȻ��ǰһ������[0;1;32m��[1mC[1m��[1mC[1m��[1mA[1m��[1m��[0m������׺�Ż�[0;1;31m��[1m��[0m��[45m��[0m����[0;1;33m��[1m��[0m��[0;1m��[1m��[0m��
�ʻ�����һ·��������ض���[0;1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m���˴�����һ��������������
�磬���ڴ˴����������࣬�ٻ��ٲݺ��������ƵĹ����������ľ���
̹���������е���ʹ�������ˣ��ջ��١�


LONG);
	setup();
	replace_program(ROOM);
}
