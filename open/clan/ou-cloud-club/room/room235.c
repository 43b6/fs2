inherit ROOM;
void create() {
	set( "short", "剑圣的无" );
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
房间内的布置相当别致有品味，一张发出淡淡幽香的桌子，闻到此
香气，顿时内息运行的特别顺畅，看来此种木材并不是易得之物，桌上
摆着几本武功密笈，仔细上一瞧，赫然发现是现今独步武林的剑法$HIR$连阳
七诀剑法$NOR$，墙上挂着一幅字画，上面有个偌大的剑字，每个笔画之间暗
藏莫测高深得剑意在，看来屋子的主人爱剑成痴阿。

LONG);
	setup();
	replace_program(ROOM);
}
