inherit ROOM;
void create() {
	set( "short", "妖刀冢" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "zeros" );
	set( "light_up", 1 );
	set( "build", 10019 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room167",
		"west"      : "/open/clan/sky-wu-chi/room/room243.c",
	]) );
	set( "long", @LONG
当你来到这里，一股凉意直扑你而来，你看了看四周，原来这里是
传说中葬刀的地方。在里面可以看到一把失去灵气的刀，那把失去灵气
的刀，但是仔细一看，这把刀是千年难得一见的好刀，只是失去灵气而
已，想要这把刀恢复本身原有的状态只有以身弑血并把本身的命交给刀
，才有可能得到这把真真的妖刀，但是有多少人能以身弑血。而得到这
把绝世妖刀。
LONG);
	setup();
	replace_program(ROOM);
}
