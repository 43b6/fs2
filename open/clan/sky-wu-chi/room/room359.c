inherit ROOM;
void create() {
	set( "short", "寒霜居-防具库" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "light_up", 1 );
	set( "owner", "roboo" );
	set( "build", 11936 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room241",
	]) );
	set( "long", @LONG
在这满是浑天水晶所建成的房间中，表面看起来与西边的寒霜
居没什么不同。当你准备要离去之时，突然一阵豪光从你背后射来
，速度之迅速令你闪无可闪，原以为是中了暗器，心想完了！但当
你定心一看才发觉一点伤也没有。好奇心怂恿下，向那道光芒的来
处一看才发觉原来在水晶璧中摆放一套堪称全狂想防御力最高的虹
晶装备，分别为　虹晶头钗(diamond hairpin)　
　　　　　　　　虹晶双翼铠(diamond armor)
　　　　　　　　虹晶识皇披风(diamond cloak)
　　　　　　　　虹晶狂牙手套(diamond hands)
　　　　　　　　虹晶鈗铖腰带(diamond belt)
　　　　　　　　虹晶紫裙(diamond skirt)
　　　　　　　　虹晶疾风护膝(diamond legging)
　　　　　　　　虹晶神行靴(diamond boots)
LONG);
	setup();
	replace_program(ROOM);
}
