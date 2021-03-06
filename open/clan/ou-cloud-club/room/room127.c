// Room : /open/clan/ou-cloud-club/room/room127.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你走在水中几处较为高耸的土丘上,在这里你发现了不少
青蛙跳来跳去,看来在这邪恶的城堡之内,还是会有一些比较
正常的生物的,然而即便如此,这些两栖类的小生命却似乎对
你存着些许敌意,或许是你无形中打扰了他们平静的生活吧!
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$恶魔城$HIW$地下水脉$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/gold-blade",
		"amount9"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file10"   : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/capital/room/king/obj/dagger1",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"amount2"  : 1,
	]) );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room128.c",
  "west" : "/open/clan/ou-cloud-club/room/room112",
]) );
	set( "clan_room", "傲云山庄" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
