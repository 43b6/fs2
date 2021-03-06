inherit ROOM;
void create() {
	set( "short", "$HIR$通吃$HIC$小$YEL$筑$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount10" : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount7"  : 1,
		"file7"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/prayer/obj/boris-boots",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10206 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room194.c",
		"west"      : "/open/clan/ou-cloud-club/room/room239",
		"north"     : "/open/clan/ou-cloud-club/room/room238.c",
	]) );
	set( "owner", "nickm" );
	set( "long", @LONG
门前右上方，挂着一块匾仔细一看，字体歪歪斜斜，共写有
「$HIR$通吃$HIC$小$YEL$筑$NOR$”四字，刻划甚新，必是新造之物。而这些字，说它
像乌龟爬的，亦不为过，就像老鼠用尾巴沾上墨汁在桌上打转所
留下来似的，怪里怪气，无法想像。如果能有勇气将这种乌龟爬
的字，挂出来的人，不是疯子，想必也有点自我陶醉的狂人吧！
LONG);
	setup();
	replace_program(ROOM);
}
