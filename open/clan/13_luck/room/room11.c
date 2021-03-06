inherit ROOM;
void create() {
	set( "short", "绮玉门" );
	set( "object", ([
		"amount10" : 1,
		"amount8"  : 1,
		"amount3"  : 5,
		"amount7"  : 1,
		"file6"    : "/open/mogi/castle/obj/blood-water",
		"file7"    : "/open/killer/obj/herb",
		"file3"    : "/open/killer/obj/s_pill",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount6"  : 15,
		"amount2"  : 1,
		"file9"    : "/open/tendo/obj/book",
		"file8"    : "/open/killer/obj/herb",
		"amount9"  : 1,
		"file4"    : "/open/killer/obj/s_pill",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"amount4"  : 5,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10070 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room228",
		"south"     : "/open/clan/13_luck/room/room8.c",
		"enter"     : "/open/clan/13_luck/room/room10",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

　　你已进入了皇城的中心，一道宏伟的巨门耸立在你眼前，门崁上刻
着--- 绮玉门三个大字，此乃通往皇城主殿青龙殿的唯一道路，青龙殿
乃皇城内最神秘之地，凡十三吉祥内等级较高之高手，皆在内修行，从
这里就能感觉到有一股强大的气流从里面传来，所有的大内高手，随时
听从帮主的传唤。

LONG);
	setup();
	replace_program(ROOM);
}
