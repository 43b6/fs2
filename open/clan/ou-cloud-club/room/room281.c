inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$��������$NOR$" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10056 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room282",
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
