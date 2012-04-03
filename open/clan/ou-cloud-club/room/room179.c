inherit ROOM;
void create() {
	set( "short", "幸福的泉源" );
	set( "light_up", 1 );
	set( "object", ([
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/obj/gift/xisuidan",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
	]) );
	set( "build", 10121 );
	set( "owner", "doa" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room176",
	]) );
	set( "long", @LONG
           你是否曾感受过...那种月明星稀的夜晚...独自一人在草地上...
     随着迎面吹来的凉风...有着一股莫名的情愫涌上心头...这种感觉不是悲伤...
不是孤独更不是失落...这一份感觉是可以让你的心...有那么一点酸酸的有那么一丝的甜蜜
             爱就是这么有趣的东西...让你有着那么难以言容的幸福感...
                    期待着你我都能沈醉在思念的漩涡里.....

LONG);
	setup();
	replace_program(ROOM);
}
