// Room : /open/clan/sky-wu-chi/room/room75.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "青龙走廊" );
	set( "owner", "tanger" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 12001 );
	set( "object", ([
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file1"    : "/open/capital/guard/gring",
		"file3"    : "/obj/poison/five_poison",
		"file2"    : "/obj/poison/rose_poison",
		"amount2"  : 903,
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file10"   : "/open/killer/weapon/k_torch",
		"file4"    : "/u/a/acky/obj/gps",
		"amount1"  : 1,
		"amount10" : 1,
		"file7"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount6"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount3"  : 1000,
		"amount8"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount7"  : 1,
		"amount5"  : 1,
	]) );
	set( "long", @LONG
你走到了一个名为[1;37m‘[1;32m青龙[1;37m’[0m走廊的地方，你发现这里的地板有些许的不同
因为这里的地方刻着数条恶龙，你数了一数结果共有九只龙，你在看了一下子
发现有一只龙跟其他的不一样，心里也就想着，嗯，看来这只必定是整个里面
的头头，你低下去抚摸了一下，结果发现这种的眼睛居然爆射出一道光芒，突
然间你吓了一跳。此时这条恶龙就像是活了过来一样，向着你迎面扑来，你觉
的恶龙的来势凶凶，集忙运起了你百分之一百二十的力量想要抵御恶龙的攻击
可是当你正想举手起来挡的时后，你已经来不及了，因为他的尾巴正扫到你的
身体。

LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room50.c",
		"east"      : "/open/clan/sky-wu-chi/room/room152",
		"north"     : "/open/clan/sky-wu-chi/room/room78.c",
]) );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	setup();

	}
