inherit ROOM;
void create() {
	set( "short", "hild 之家" );
	set( "owner", "hild" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file1"    : "/open/ping/obj/gold_hand",
		"file3"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/ping/obj/iceger",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 10077 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room179.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room173.c",
		"down"      : "/open/clan/sky-wu-chi/room/room94",
		"south"     : "/open/clan/sky-wu-chi/room/room243.c",
		"north"     : "/open/clan/sky-wu-chi/room/room343",
	]) );
	set( "long", @LONG
这里是专门放置‘武天至圣’独孤嵊的人头的地方
由于阴曹地府里的阎罗王和所多手下们拥有超强的实力
所以当然这有超强实力的对手也是甘拜下风，想到这就
想到以前，当我还是个新手时，连这可怕的敌人都还没
打过，就这样的离去时，真是另人觉的可惜。不过现在
和各位好朋友们竟能这样如此容易得到他的人头，现在
想想也是值得的:D。
LONG);
	setup();
	replace_program(ROOM);
}
