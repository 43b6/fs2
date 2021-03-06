inherit ROOM;
void create() {
	set( "short", "$YEL$$HBBLU$阿噜咪的水族室$NOR$" );
	set( "owner", "amei" );
	set( "object", ([
		"amount9"  : 3,
		"amount1"  : 1,
		"file4"    : "/open/doctor/obj/gneedle",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/doctor/obj/feather",
		"file5"    : "/open/doctor/obj/gneedle",
		"amount3"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/doctor/pill/gnd_pill",
		"amount2"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10632 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room208",
		"west"      : "/open/clan/sky-wu-chi/room/room218.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
$HIG$一进到此地，印入眼廉的是一个超大的$HIB$鱼缸$HIG$，原来最近
$HIR$阿噜米$HIG$喜欢上养鱼儿，便特地请人做个一个$HIB$鱼缸$HIG$。$HIB$鱼缸$HIG$里各
式各样的鱼儿都有，$HIR$阿噜米$HIG$在缸里布置了水草，再搭配上亮
眼的$WHT$日光灯$HIG$，另你不禁心情顿时明亮起来，只觉鱼儿在缸里
的悠闲生活，正对你照成一种安抚之心，每当$HIR$阿噜米$HIG$有不愉
快之事，他便会来到此地舒解心情。$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
