inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$���û�ϥ$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "light_up", 1 );
	set( "build", 10020 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room205.c",
		"out"       : "/open/clan/ou-cloud-club/room/room264",
	]) );
	set( "long", @LONG
ǿ�ҵĸ�ʴ����������ӭ��������ʹ�㲻�ò�����ȫ���ֵ�����������
�ľ���ɱ���������ӡ��������ԭ�����ڱ�����磬�����������ǧ������
--��������У�������ǧ��ǰ�����콫֮�������������������������
�Ƴ�Ϊʮ���������������������ľ���װ����

LONG);
	setup();
	replace_program(ROOM);
}
