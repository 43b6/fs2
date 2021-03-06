// Room : /open/clan/ou-cloud-club/room/room7.c
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
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/capital/guard/gring",
		"file8"    : "/open/capital/guard/gring",
		"file5"    : "/open/killer/obj/kill_yar_head",
		"file4"    : "/open/capital/guard/gring",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/killer/headkill/obj/bluekill",
		"file2"    : "/open/capital/guard/gring",
	]) );
	set( "build", 12971 );
	set( "clan_room", "傲云山庄" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/ou-cloud-club/room/room8.c",
		"south"     : "/open/clan/ou-cloud-club/room/hall.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
