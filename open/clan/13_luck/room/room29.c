inherit ROOM;
void create() {
	set( "short", "����ˮ�����" );
	set( "object", ([
		"file2"    : "/daemon/class/blademan/obj/hstone",
		"file9"    : "/daemon/class/blademan/obj/fstone",
		"amount6"  : 1,
		"file5"    : "/daemon/class/blademan/obj/wastone",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/daemon/class/blademan/obj/estone",
		"amount4"  : 8,
		"amount9"  : 1,
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"amount2"  : 1,
		"file4"    : "/open/fire-hole/obj/b-pill",
		"file6"    : "/daemon/class/blademan/obj/gstone",
		"file7"    : "/open/ping/obj/ring-2",
	]) );
	set( "owner", "amdmp" );
	set( "build", 14115 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room28.c",
		"out"       : "/open/clan/13_luck/room/room30",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����һ�����;�������ǳ��������������ȥ��ææµµ��������
��ˮ����æµ��װж����������ֵľ���ӳ�������������������ʮ
�������Ǹ����ٵĵط����������ͨ��ˮ������������ʴ��ң����ǻ�
�����������ǰ���ġ�

LONG);
	setup();
	replace_program(ROOM);
}
