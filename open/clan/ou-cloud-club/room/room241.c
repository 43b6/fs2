inherit ROOM;
void create() {
	set( "short", "$HIR$风  $HIM$随  $HIB$行$NOR$" );
	set( "object", ([
		"file9"    : "/open/killer/obj/hate_knife",
		"file6"    : "/open/scholar/obj/icefan",
		"amount9"  : 14744,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "ripken" );
	set( "build", 10837 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room215.c",
		"west"      : "/open/clan/ou-cloud-club/room/room242",
		"up"        : "/open/clan/ou-cloud-club/room/room256.c",
	]) );
	set( "long", @LONG
一把雪 放于手灼热 但愿不再怕北风深寒刺裂
深深的爱过 永不会泯灭 过度千世百劫都不能间断
                                                                                
悲伤不要说 太匆匆岁月 现在应与妳相恋的人吻别
分不清季节 这冰冷四月 眼前的世界 景色凄迷决绝
                                                                                
悲伤不要说 太匆匆岁月 现在应与妳相恋的人吻别
分不清季节 这冰冷四月 我们不要说再见 随世界破灭

LONG);
	setup();
	replace_program(ROOM);
}
