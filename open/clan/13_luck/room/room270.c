inherit ROOM;
void create() {
	set( "short", "�������ķ�" );
	set( "object", ([
		"file1"    : "/open/marksman/obj/dragon_bow",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room279",
		"south"     : "/open/clan/13_luck/room/room299.c",
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	set( "long", @LONG

    ���᱾�������������̨��������һ��δ��ǳ�������˵�еķ�
�ߣ��������ģ��������书�����ֵģ��������������ϣ����б���ɱ��
���߶�����·�ڵĿ��ţ��Ǹ��÷��ߣ�Ҳ�����ֿ��ŵ�һ�죬��������
����ȱ����һ�졣

LONG);
	setup();
	replace_program(ROOM);
}
