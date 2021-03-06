// Room : /open/clan/ou-cloud-club/room/room14.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 4 */
		"north"     : "/open/clan/ou-cloud-club/room/room118",
		"west"      : "/open/clan/ou-cloud-club/room/room107.c",
		"east"      : "/open/clan/ou-cloud-club/room/room130.c",
		"south"     : "/open/clan/ou-cloud-club/room/room15.c",
]) );
	set( "cmkroom", 1 );
	set( "short", "$HIY$傲$HIC$云$NOR$居" );
	set( "object", ([
		"file5"    : "/open/gsword/obj/dragon-cloth",
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/port/obj/wolf_ring",
		"file1"    : "/daemon/class/fighter/armband",
		"amount10" : 1,
		"amount9"  : 1,
		"file10"   : "/open/ping/obj/ring-2",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/prayer/obj/kylin-belt",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
	]) );
	set( "owner", "ltiger" );
	set( "build", 10357 );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的地方，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是刀邪．不二刀(moblade)的房间，右边则是无情(koi)之卧室．

LONG);
	setup();

	}
