inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$�鷿 $HIM$��$NOR$" );
	set( "owner", "fsmud" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file9"    : "/daemon/class/fighter/ywhand",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/wu/npc/obj/armband",
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
		"file5"    : "/open/gsword/obj/yuskirt",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10044 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room170",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
