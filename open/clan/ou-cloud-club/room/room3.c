// Room : /open/clan/ou-cloud-club/room/room3.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$炼金研究栋$NOR$" );
	set( "build", 10161 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
  "east" : "/open/clan/ou-cloud-club/room/room45",
  "west" : "/open/clan/ou-cloud-club/room/room28.c",
  "up" : "/open/clan/ou-cloud-club/room/room19.c",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
你似乎听见附近传来一阵一阵不协调的传来机械运转声,
在这座拥有悠久历史的古堡之中尤其显得突兀,或许是德古拉
厌倦了一直使用魔法的日子,而想以机械取代魔力的消耗吧!!
否则又怎会有金属研究以及机些装置的存在呢!?

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
