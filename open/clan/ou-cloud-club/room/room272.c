inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$���û�ϥ$NOR$" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
	]) );
	set( "build", 13474 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room205",
		"east"      : "/open/clan/ou-cloud-club/room/room271",
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
