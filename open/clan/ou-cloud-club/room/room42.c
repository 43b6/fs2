// Room : /open/clan/ou-cloud-club/room/room42.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$入口$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 14826 );
	set( "light_up", 1 );
	set( "long", @LONG
空气中飘来一古潮湿的气息,你正站在一个悬空平台上,下方是深不见
底的水道,水里有为数不少的丑陋人鱼,不时跳上水面口吐火焰的向你挑衅
,但似乎无法离开水面太久,所以马上又钻回水里了,水面下似乎另有洞天,
然上方飞来的蝙蝠也令人相对的产生好奇,或许上面是比较接近邪恶之源
的地方呢!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
  "up" : "/open/clan/ou-cloud-club/room/room43.c",
  "down" : "/open/clan/ou-cloud-club/room/room44.c",
  "west" : "/open/clan/ou-cloud-club/room/room41",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
