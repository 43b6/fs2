inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount4"  : 1,
	]) );
	set( "build", 10053 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room299",
	]) );
	set( "long", @LONG

    ������[0;1m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1m��[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
ȫƾ�����������߶��������ģ�ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
