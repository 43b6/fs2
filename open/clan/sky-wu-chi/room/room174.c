inherit ROOM;
void create() {
	set( "short", "$HIC$咩 咩 澡 房$NOR$" );
	set( "owner", "roboo" );
	set( "object", ([
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/capital/obj/blade2",
		"file5"    : "/daemon/class/dancer/bee_flute",
		"file6"    : "/open/capital/guard/gring",
		"amount6"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10887 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room25.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
房内摆着$HIR$乌木有束腰鼓腿彭牙梅花凳$NOR$,
$HIC$红木六开光雕拐子龙纹鼓墩$NOR$,
$HIW$黑白万花嵌螺钿酸枝木小圆桌$NOR$,
这房内的摆置简直可比帝王之家的还享受,
虽说$HIW$思量$NOR$只是个小小副帮主,
燕仔一看喝道{哇咧!帮款被你盗用多少? *_*}
LONG);
	setup();
	replace_program(ROOM);
}
