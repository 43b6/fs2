inherit ROOM;
void create() {
	set( "short", "EMCӪ������" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10995 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
Ӫ������..����ÿ��������Ǣ����Ա..�볤�ٵĳ���..�Ǽ���
һ��Ҫ��..���ų�����������..����һλ�ڳ�..������Сʱһ��..
�зֵ����ڸ�˫����..���ɾ����Ű�������������..ÿ��������Ҫ
ȫ����װ�Է�ֹ���˵�����..���Ҿ�Ҫ��һ���Ӵ�����֧Ԯ��..
LONG);
	setup();
	replace_program(ROOM);
}
