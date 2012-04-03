inherit ROOM;
void create() {
	set( "short", "��ʥ����" );
	set( "object", ([
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount8"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
		"file5"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file2"    : "/open/gsword/obj/silver_sword",
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "owner", "player" );
	set( "build", 10346 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room315",
		"east"      : "/open/clan/ou-cloud-club/room/room198.c",
		"south"     : "/open/clan/ou-cloud-club/room/room303.c",
		"west"      : "/open/clan/ou-cloud-club/room/room305",
		"north"     : "/open/clan/ou-cloud-club/room/room237.c",
	]) );
	set( "long", @LONG
�����ڵĲ����൱������Ʒζ��һ�ŷ���������������ӣ��ŵ���
��������ʱ��Ϣ���е��ر�˳������������ľ�Ĳ������׵�֮�����
���ż����书���ţ���ϸ��һ�ƣ���Ȼ�������ֽ�������ֵĽ���$HIR$����
�߾�����$NOR$��ǽ�Ϲ���һ���ֻ��������и�ټ��Ľ��֣�ÿ���ʻ�֮�䰵
��Ī�����ý����ڣ��������ӵ����˰����ɳհ���

LONG);
	setup();
	replace_program(ROOM);
}
