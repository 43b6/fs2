inherit ROOM;
void create() {
	set( "short", "$HIY$香蕉周刊$HIM$AV$HIW$编辑部$NOR$ " );
	set( "object", ([
		"amount7"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount5"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "owner", "blur" );
	set( "build", 10230 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room49.c",
		"north"     : "/open/clan/hell/room/room47.c",
		"east"      : "/open/clan/hell/room/room93.c",
		"west"      : "/open/clan/hell/room/room46",
	]) );
	set( "long", @LONG
大飞...kalin的小弟...
目前正跟浩南抢铜锣湾的扛霸子..
由于致力培植势力,所以创立了香蕉周刊..
希望可以带来一些仰慕者...
由于AV部是香蕉周刊的心脏部门..
也是大飞的专长...
所以大飞闲来无事都在这里研究研究....
看他投入的样子...正是符合认真的流氓最帅这句话....
LONG);
	setup();
	replace_program(ROOM);
}
