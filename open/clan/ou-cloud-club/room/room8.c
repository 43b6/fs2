// Room : /open/clan/ou-cloud-club/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
通往恶魔城的道路，是傲云山庄内的主要道路，两
边的墙壁是以$HIC$玄离冰$NOR$打造而成的，不时透发出一股清透
凉意，火把更是以火龙幻境内的$HIR$火龙胆$NOR$点燃，据说可以
永不熄灭．而地板则是使用无坚不摧的金刚石所铺设而
成，一眼望去光芒万千．

LONG);
	set( "short", "傲云道" );
	set( "owner", "jet" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"amount8"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/doctor/pill/gnd_pill",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 296,
		"amount7"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"file2"    : "/open/doctor/pill/sky_pill",
		"amount2"  : 275,
		"file4"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10777 );
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/ou-cloud-club/room/room20.c",
		"south"     : "/open/clan/ou-cloud-club/room/room7.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
