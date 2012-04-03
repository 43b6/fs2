inherit ROOM;
void create() {
	set( "short", "EMC 五百障碍场" );
	set( "object", ([
		"amount6"  : 1,
		"amount4"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/capital/guard/gring",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10248 );
	set( "owner", "adeyzit" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room104",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
五百障碍为训练的重头戏,可能有人当兵一年十个月都没有跑过..
第一障碍高低跨栏..第二栏颇高..要注意..第二障碍为爬竿
爬竿有些技巧..臂力握的住脚夹的紧很重要..第三为板墙
第四为高跳台..第五障碍为沙坑..第六障碍为独木桥..
第七为低襻网..两分半跑完可是满百的ㄛ..全副武装带枪跑..
LONG);
	setup();
	replace_program(ROOM);
}
