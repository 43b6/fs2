inherit ROOM;
void create() {
	set( "short", "���������" );
	set( "object", ([
		"amount3"  : 1,
		"file2"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj/yuskirt",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "vickey" );
	set( "build", 10293 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room300",
	]) );
	set( "long", @LONG

    ������[0;1;34m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1mB[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
ȫƾ�����������߶��������ģ�ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
