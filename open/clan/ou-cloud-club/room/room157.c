inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$������צ$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10134 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room206.c",
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
