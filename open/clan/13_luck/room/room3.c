inherit ROOM;
void create() {
	set( "short", "����ˮ��" );
	set( "object", ([
		"file7"    : "/daemon/class/blademan/obj/hstone",
		"file5"    : "/daemon/class/blademan/obj/wastone",
		"file3"    : "/daemon/class/blademan/obj/estone",
		"amount1"  : 1,
		"file6"    : "/daemon/class/blademan/obj/skykey",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/daemon/class/blademan/obj/gstone",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/daemon/class/blademan/obj/wstone",
		"file2"    : "/daemon/class/blademan/obj/fstone",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10103 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/hall.c",
		"west"      : "/open/clan/13_luck/room/room26",
	]) );
	set( "long", @LONG

    ������ǰԶ��ʱ�����е��ǳ����ˣ���ΪĿ�ĵؼ����������
��ע��ǰ���ľ�ɫʱ�����ú���������̽��֮��֪������ʮ�������
��ʤ����Ȫ������ʮ�����������Ŧ�����������İ����ڶ࣬���Ͳ�
�øϿ��´�ȥ����Ȫ�ú�����һ�㡣

LONG);
	setup();
	replace_program(ROOM);
}
