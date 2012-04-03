inherit ROOM;
void create() {
	set( "short", "�ϴ�ľƳ�����" );
	set( "object", ([
		"amount1"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/gsword/star/obj/stargem",
		"amount2"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/gsword/star/obj/starboots",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "owner", "bebe" );
	set( "light_up", 1 );
	set( "build", 11310 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room116",
		"west"      : "/open/clan/hell/room/room118.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
