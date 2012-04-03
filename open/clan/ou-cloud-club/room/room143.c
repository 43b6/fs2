inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"file10"   : "/open/magic-manor/obj/dark-soul-dagger",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"amount9"  : 1,
	]) );
	set( "owner", "bbsboss" );
	set( "build", 11667 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room169",
		"west"      : "/open/clan/ou-cloud-club/room/room136",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ̤��˴�...ŨŨ��ɱ����������ͷ....
̧ͷһ��...ԭ����֪�������С���Ĵ���������ǿ������Ŵ�
��ϸһ��...��ȫ�������Խ����������ɵ�����֮��
ʥ��..��ɽ...����ɽկ........
�����ķ������......
��һ�������Ǵ������ķ���....
LONG);
	setup();
	replace_program(ROOM);
}
