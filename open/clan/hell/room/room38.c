inherit ROOM;
void create() {
	set( "short", "$RED$è��$NOR$" );
	set( "object", ([
		"file6"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file1"    : "/daemon/class/fighter/ywhand",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
	]) );
	set( "owner", "onyx" );
	set( "build", 10068 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room21.c",
		"south"     : "/open/clan/hell/room/room64",
		"east"      : "/open/clan/hell/room/room65.c",
		"north"     : "/open/clan/hell/room/room66.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����Ǵ�˵��$RED$è��$NOR$����ײ㣬��ǰ���ֵ���è����$HIW$����$NOR$��
������ĩ��������è���ˣ������æ�������ȥ�ˣ���˵�����Ҫ���ԣ�
Ҳ��֪���ǳ�ȥ���黹��ƭ���ã������ϲ����Żҳ������������
����èһ���Ǹ������¼�����............  ����

LONG);
	setup();
	replace_program(ROOM);
}







































































































































































































































































