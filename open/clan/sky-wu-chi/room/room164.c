inherit ROOM;
void create() {
	set( "short", "如梦似幻" );
	set( "owner", "pigpana" );
	set( "light_up", 1 );
	set( "build", 13208 );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/daemon/class/blademan/obj/six-neck",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/tendo/obj/chaosbelt",
		"file10"   : "/obj/gift/unknowdan",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/daemon/class/blademan/obj/six-neck",
		"amount5"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/obj/gift/bingtang",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room69",
	]) );
	set( "long", @LONG
正当你踏进这个房间之时,忽然间[31m雷声大响[0m,瞬间一道[32m闪电[0m已经
劈在你身上,将你的[36m护身气劲[0m全数打散,在此同时传来阵阵齿轮转动
的声响,转眼间,已经是一阵[33m暴雨[0m,将你淋的一身湿,就在你还搞不清
楚状况的时候,却忽然惊觉!一切[37m都是幻觉[0m,不禁让你想马上离开这
个恐怖又奇幻的地方.

LONG);
	setup();
	replace_program(ROOM);
}
