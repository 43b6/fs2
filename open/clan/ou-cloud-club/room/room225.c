inherit ROOM;
void create() {
	set( "short", "念奴娇-大江东去" );
	set( "object", ([
		"amount1"  : 16,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/ping/obj/ring-2",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 11,
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file4"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/fire-hole/obj/w-pill",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10172 );
	set( "light_up", 1 );
	set( "owner", "flower" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room217",
	]) );
	set( "long", @LONG

大江东去，浪淘尽，千舌风流人物。
故垒西边，人道是，三国周郎赤壁。
乱石穿空，惊涛拍岸，卷起千堆雪。
江山如画，一时多少豪杰。
遥想公瑾当年，小乔初嫁了，雄姿英发。
羽扇纶巾，谈笑间，樯橹灰飞烟灭。
故国神游，多情应笑我，早生华发。
人间如梦，一尊还酹江月。

LONG);
	setup();
	replace_program(ROOM);
}
