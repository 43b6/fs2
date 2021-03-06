// Room : /open/clan/ou-cloud-club/room/room100.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIW$恶魔城$HIR$地下水脉$NOR$" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"file2"    : "/open/prayer/obj/boris-cloth",
		"file10"   : "/open/prayer/obj/boris-cloth",
		"amount9"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"file3"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/prayer/obj/boris-cloth",
		"amount10" : 1,
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "long", @LONG
这里有几处突起的地面坐落在水中,看来踩着这些地方也能
前进,慢慢走吧,由于溼度的关系,地面上可是长满了青苔呢.可
小心点不要掉下去了呢,传说恶魔城存在着能在水里吐发火焰
的怪鱼,若掉下去真的被逮着了那可就不好玩喽~~~

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/ou-cloud-club/room/room103.c",
		"west"      : "/open/clan/ou-cloud-club/room/room99.c",
]) );
	set( "no_transmit", 1 );
	setup();

	}
