inherit ROOM;
void create() {
	set( "short", "朱雀走廊" );
	set( "owner", "tanger" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"amount6"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount7"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount4"  : 1,
		"file1"    : "/open/dancer/obj/yuaboots",
		"file9"    : "/open/scholar/obj/icefan",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/open/ping/obj/ring-2",
		"amount10" : 1,
		"amount3"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount8"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/capital/room/king/obj/km-cloak",
		"amount1"  : 1,
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 12120 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room75.c",
		"north"     : "/open/clan/sky-wu-chi/room/room151",
	]) );
	set( "long", @LONG
你走进了一个名为[1;37m‘[1;31m朱雀[1;37m’[0m走廊的地方，你才刚走进来这里时你马上
发现四周的空气因为太干燥而产生一种爆裂的声音，你仔细的想了一下为
什么会这样子，在看了一下四周都是用火红的熔岩所做成的，马上想到这
里就是属于南方的朱雀之所在，你开始觉得很热，且越走进去你发觉热度
是越来越高，渐渐的你也快受不了，突然间你看到了一只火凤凰就在前面
正在梳理牠自己的羽毛，当他看到你时，牠周围的火焰就突然的烧的更烈
了起来，好像是在你说已经闯入了不该闯入的地方似的。

LONG);
	setup();
	replace_program(ROOM);
}
