inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$����ͷ��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10122 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room292",
		"west"      : "/open/clan/ou-cloud-club/room/room294",
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
