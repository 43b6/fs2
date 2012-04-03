inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$������צ$NOR$" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/mon/obj/ghost-claw",
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
	]) );
	set( "build", 10864 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room280.c",
		"west"      : "/open/clan/ou-cloud-club/room/room157.c",
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
