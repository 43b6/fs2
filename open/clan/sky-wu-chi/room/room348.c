inherit ROOM;
void create() {
	set( "short", "玄虎的发呆室" );
	set( "owner", "xman" );
	set( "object", ([
		"amount9"  : 1,
		"amount10" : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount6"  : 19,
		"amount4"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"file9"    : "/obj/gift/unknowdan",
		"amount2"  : 1,
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"file2"    : "/open/gsword/obj/yuskirt",
		"amount8"  : 1,
		"file7"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/ping/questsfan/obj/dagger1",
		"file1"    : "/open/snow/obj/figring",
		"amount1"  : 1,
		"file3"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 10074 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room296",
	]) );
	set( "long", @LONG

[41m靠近一点[0m


[41m词 : 林利南 曲 : 游鸿明 [0m

[41m你说你喜欢 挤进我大衣里面 [0m
[41m冷冷的天气 分享着我的温暖 [0m
[41m试着接住我 嘴里吐出的 白色仿佛烟的水气 你熟悉的气味 [0m

[41m如果你可以 体会我为何颓癈 [0m
[41m也许我可以 不让你为谁憔悴 [0m
[41m我们终究要 勇敢的面对 你对我那种爱的感觉 也有体会 [0m

[41m靠近一点 让我的脸轻轻的靠近你的脸 [0m
[41m靠近一点 让我的眼紧紧的贴着你的眼 [0m
[41m当你开始会问他是谁 当你开始为爱掉眼泪 [0m
[41m你的防备 彻底的崩溃 [0m

[41m靠近一点 让我的嘴无意的碰触你的嘴 [0m
[41m靠近一点 让我的眉深深的印着你的眉 [0m

[41m当你开始会问他是谁 [0m
[41m当你开始为爱掉眼泪 [0m
[41m你会爱我 就像我爱过那一夜 [0m



LONG);
	setup();
	replace_program(ROOM);
}
