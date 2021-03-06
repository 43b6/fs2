// Room : /open/clan/ou-cloud-club/room/room43.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$入口$NOR$" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10033 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
一条楼梯在此蜿蜒而上,不知通往何方,不过你稍微可以见到墙外的
明亮月光了,大得有如近看车轮,却又完美无瑕疵的月亮,虽然美丽,但在
几许垂下树枝的飘逸衬托之下,却更令人觉得毛骨悚然,月,可以是件艺术
但也伴随着黑暗而来临,好比,这座妖气弥漫的华丽古堡.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/ou-cloud-club/room/room42",
  "west" : "/open/clan/ou-cloud-club/room/room45.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
