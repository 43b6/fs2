// Room : /open/clan/demon_castle/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "柳月泉" );
	set( "object", ([
		"file10"   : "/open/capital/guard/gring",
		"amount7"  : 1,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"file4"    : "/open/doctor/pill/sky_pill",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount8"  : 2,
		"amount4"  : 237,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/main/obj/shiblade",
		"file9"    : "/obj/gift/bingtang",
		"amount5"  : 216,
	]) );
	set( "item_desc", ([
		"map" : @ITEM
                                             齐天殿  
                                               ∣
                            白虎堂           青龙殿           朱雀堂
                              ∣               ∣               ∣
                             堂口－青龙回廊－青龙殿－青龙回廊－堂口
                                               ∣
  芙樱泉                                     绮玉门
    ∣                                         ∣
 水之神殿                                   皇城大道
    ∣                                         ∣
  芙樱流─芙樱流─芙樱流─映水门─皇城水路  皇城大道
                                     ∣        ∣
                                  皇城水路－皇城大道
                                               ∣
                                            皇城大道
                                               ∣     
                 秋阳流─吉祥水道─吉祥水道─柳月泉─咏泉亭─吉祥林道─吉祥林道─雾之林入口
                   ∣                          ∣
  吉祥水道入口－吉祥水道                     武器室

ITEM,
	]) );
	set( "exits", ([ /* sizeof() == 5 */
		"west"      : "/open/clan/13_luck/room/room3.c",
		"east"      : "/open/clan/13_luck/room/room2.c",
		"south"     : "/open/clan/13_luck/room/room5.c",
		"up"        : "/open/clan/13_luck/room/room9.c",
		"enter"     : "/open/clan/13_luck/room/room136.c",
		"north"     : "/open/clan/13_luck/room/room4.c",
	]) );
	set( "build", 10067 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "long", @LONG

    柳月泉里总是无时无刻的散发出如柳月般的淡淡金光，金光总随着
泉水起起伏伏，也让四周的景物闪闪发亮，仿佛是人间仙境。且柳月泉
也是十三吉祥的中心点，是进出皇城的必经之地，而且也是让大家沟通
意见的地方，如果你想知道十三吉祥的地图可以观看一下地图(map)。

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();
	call_other( "/obj/board/13_luck_b", "???" );
	
	}
