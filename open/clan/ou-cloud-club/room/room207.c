inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$��������$NOR$" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 12261 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room288.c",
		"west"      : "/open/clan/ou-cloud-club/room/room161.c",
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
