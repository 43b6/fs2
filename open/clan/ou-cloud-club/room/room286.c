inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$��$HIY$��������$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10556 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room285",
		"west"      : "/open/clan/ou-cloud-club/room/room287",
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
