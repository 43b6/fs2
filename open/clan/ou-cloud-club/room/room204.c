inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$����ͷ��$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 13037 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room208.c",
		"out"       : "/open/clan/ou-cloud-club/room/room264.c",
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
