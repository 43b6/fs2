inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "amdmp" );
	set( "object", ([
		"file2"    : "/open/fire-hole/obj/r-pill",
		"file1"    : "/open/fire-hole/obj/b-pill",
		"file4"    : "/daemon/class/blademan/obj/skykey",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount1"  : 209,
		"amount6"  : 234,
		"amount4"  : 1,
		"file6"    : "/open/fire-hole/obj/y-pill",
		"amount3"  : 33,
		"amount2"  : 83,
	]) );
	set( "build", 10009 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room28",
		"east"      : "/open/clan/13_luck/room/room26.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ���Ѿ����˼���ˮ�����������ˣ��㿴�����ܾ������ⰻȻˮ����
�в��ٵ�С������Ϸ�ţ����������Լ�Сʱ�����֣�������Ŀ������һ
���������ܵľ����������ˣ���Ҷ����ת�������������΢������
��������������е�ת���ˣ�������ʮ������������������ֻҪ������
��������Ϣ�ͷǳ�Ũ�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
