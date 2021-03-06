inherit ROOM;
void create() {
	set( "short", "花海" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/capital/obj/blade2",
		"amount2"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/dancer/obj/maple_ribbon",
		"file4"    : "/open/capital/guard/gring",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/capital/obj/blade2",
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file1"    : "/open/capital/obj/blade2",
		"file3"    : "/open/badman/obj/badhelmet",
		"file9"    : "/open/capital/obj/blade2",
		"amount6"  : 339,
		"file8"    : "/open/capital/obj/blade2",
		"amount5"  : 1,
	]) );
	set( "build", 10082 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
眼前一片无望无际的花中世界,可能就是维持湖居小筑空气芳香
的来源,你四处张望了一下发觉前面的花海中各种花的排列方式
似乎是依照五行八卦来组合的,止时你发觉在花海的中心有着一
座花神的神像,而神像的四周开着你不曾看过的奇异花种,想必那
就是让只小岛的空气如止美好的主因吧.

LONG);
	setup();
	replace_program(ROOM);
}
