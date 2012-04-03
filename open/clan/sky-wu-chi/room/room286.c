inherit ROOM;
void create() {
	set( "short", "人灵丹药柜" );
	set( "owner", "amei" );
	set( "object", ([
		"amount9"  : 2,
		"amount1"  : 141,
		"file4"    : "/open/killer/obj/s_pill",
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 314,
		"amount5"  : 131,
		"amount7"  : 1,
		"file8"    : "/open/doctor/pill/gnd_pill",
		"file10"   : "/open/doctor/pill/sky_pill",
		"file5"    : "/open/doctor/pill/human_pill",
		"amount3"  : 1,
		"amount4"  : 15,
		"file9"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 1,
		"file7"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 3,
		"amount8"  : 9,
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file1"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10046 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room293",
	]) );
	set( "long", @LONG
这里是AMEI摆三种救命丹药之中的人灵丹的地方，他的最大功效
就是能恢复所有的生命力，不过可惜的是他比起九转蛇还丹和
生生造化丹的功效来的差，不过你拿不到前面这两种救命仙丹
那人灵丹就是最强的，而且材料易取得假如你想要记得要跟
AMEI说O。。。。
LONG);
	setup();
	replace_program(ROOM);
}
