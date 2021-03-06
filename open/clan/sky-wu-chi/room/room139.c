inherit ROOM;
void create() {
	set( "short", "$HIY$【平南书院】 $HIG$前庭$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/capital/room/king/obj/dagger1",
		"amount8"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/capital/guard/gring",
		"file10"   : "/open/ping/obj/cloud_fan",
		"amount1"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/obj/cloud_fan",
		"amount7"  : 1,
		"file2"    : "/open/ping/questsfan/obj/stone",
		"file8"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/ping/obj/cloud_fan",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/ping/obj/cloud_fan",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10029 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room165.c",
		"west"      : "/open/clan/sky-wu-chi/room/room44.c",
		"out"       : "/open/clan/sky-wu-chi/room/room141.c",
		"north"     : "/open/clan/sky-wu-chi/room/room197",
	]) );
	set( "long", @LONG
走进书院前庭，两条用红砖铺成的笔直大道朝前后及左右延伸而去，将前庭的
大草坪划分成四块区域，草坪上零零落落的放着几件学生们忘了拿走的东西。在道
路两旁，是一座座用石头作成的小人像，每个人物的表情和面貌各有风采，看起来
好像都是在讨论学问的样子。朝北方过去可以走进书院的中庭，南边是书院大门，
东西两边各有一栋建筑物，似乎是学生读书的地方。
LONG);
	setup();
	replace_program(ROOM);
}
