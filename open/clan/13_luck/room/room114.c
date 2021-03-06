inherit ROOM;
void create() {
	set( "short", "望月楼" );
	set( "object", ([
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/ping/obj/gold_hand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"amount1"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "winona" );
	set( "build", 10872 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room42.c",
		"north"     : "/open/clan/13_luck/room/room160",
	]) );
	set( "long", @LONG

    这里是十三吉祥的客栈右厅，入口的大门上面高高悬着一块琉璃黄
金匾，上头写着‘望月楼’三个斗大的字，阳光照耀下，反射出耀眼的
金光，朱红色的大门开着，门上两个门环俱做狮头状，显的气派非凡，
门两旁各蹲着一个雕的栩栩如生的石狮子。

LONG);
	setup();
	replace_program(ROOM);
}
