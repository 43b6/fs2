inherit ROOM;
void create() {
	set( "short", "$HIY$傲$HIC$云$NOR$居$HIM$中庭$NOR$" );
	set( "owner", "miko" );
	set( "object", ([
		"amount2"  : 150,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount6"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 2,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount5"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 13,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/capital/guard/gring",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 100,
		"amount8"  : 1,
		"file1"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 10617 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room203.c",
		"jump"      : "/open/clan/ou-cloud-club/room/room313",
		"southdown" : "/open/clan/ou-cloud-club/room/hall.c",
		"north"     : "/open/clan/ou-cloud-club/room/room122.c",
		"northup"   : "/open/clan/ou-cloud-club/room/room119.c",
		"south"     : "/open/clan/ou-cloud-club/room/room14.c",
		"west"      : "/open/clan/ou-cloud-club/room/room142.c",
		"down"      : "/open/clan/ou-cloud-club/room/room87.c",
		"east"      : "/open/clan/ou-cloud-club/room/room244.c",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的地方，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是幕后大佬龙(long)的房间藏龙居，右边则是黑夜奔雷(del)之弃刀冢．

LONG);
	setup();
	replace_program(ROOM);
}
