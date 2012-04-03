inherit ROOM;
void create() {
	set( "short", "又小又软的视听室" );
	set( "owner", "microsoft" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 11327 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room8",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里是又小又软每天奋斗完唯一可以好好休息的地方，虽然里面的陈设简单，
可是该有的东西一项也不少。除了柔软的沙发和高级的视听设备，更有着帮主-小敏
的大幅照片挂在墙上，因为他总是逼又小又软去做一些高难度的工作，又不给他
加班费，所以当他忙完回来后对着小敏的照片PK一小时是他生活的唯一寄托了
，一想到这里，你不禁对又小又软悲惨的遭遇感到十分的同情了。

LONG);
	setup();
	replace_program(ROOM);
}
