inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$��ԡ�� $HIM$��$NOR$" );
	set( "owner", "fsmud" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file1"    : "/daemon/class/fighter/ywhand",
		"amount7"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"file2"    : "/open/gsword/obj/yuskirt",
		"file10"   : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
	]) );
	set( "build", 10050 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room170",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
