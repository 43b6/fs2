inherit ROOM;
void create() {
	set( "short", "资源回收区" );
	set( "owner", "biwem" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 96,
		"file6"    : "/open/fire-hole/obj/g-pill",
		"amount6"  : 185,
		"amount10" : 40,
		"amount3"  : 10,
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount2"  : 12,
		"amount7"  : 2,
		"file5"    : "/open/fire-hole/obj/r-pill",
		"amount8"  : 1,
		"file8"    : "/obj/gift/shenliwan",
		"amount9"  : 1,
		"file9"    : "/open/snow/obj/cold_pill",
		"amount5"  : 41,
		"file10"   : "/open/mogi/castle/obj/sspill",
		"file7"    : "/open/fire-hole/obj/k-pill",
		"amount4"  : 90,
		"file4"    : "/open/fire-hole/obj/p-pill",
	]) );
	set( "build", 10030 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room341",
		"west"      : "/open/clan/sky-wu-chi/room/room175.c",
	]) );
	set( "long", @LONG
这是机器人一号ㄉ资源回收区,里面收齐ㄌ许多能回收ㄉ资源

在别人ㄉ眼里全是不值钱ㄉ垃圾,;在机器人一号ㄉ眼里却是能回收ㄉ资源

一些直得他回收ㄉ资源;这时你不由得怀疑机器人一号ㄉ眼睛长在哪里

竟然收集ㄌ那么多ㄉ垃圾
LONG);
	setup();
	replace_program(ROOM);
}
