inherit ROOM;
void create() {
	set( "short", "$HIC$流$NOR$的$HIY$房间$NOR$" );
	set( "owner", "lauwei" );
	set( "object", ([
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/daemon/class/fighter/ywhelme",
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"amount8"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/fire-hole/obj/p-pill",
		"amount5"  : 17,
		"amount1"  : 1,
		"file8"    : "/obj/gift/unknowdan",
		"file10"   : "/obj/gift/unknowdan",
		"amount9"  : 1,
		"amount2"  : 40,
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"amount6"  : 1,
		"file4"    : "/obj/gift/xiandan",
		"amount3"  : 1,
		"file6"    : "/open/capital/obj/4-4",
		"amount7"  : 1,
		"file7"    : "/open/ping/obj/cloud_fan",
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11520 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room87.c",
	]) );
	set( "long", @LONG

你一进门就看到一个$HIC$大匾额$NOR$-----$HIR$行$HIG$云$HIY$流$HIC$水$NOR$-----
在往里看你只看到了一个懒人一动也不不动的躺
在$HIY$沙发$NOR$椅上看着五十寸的$HIC$大电视$NOR$....哇塞....真
皮$HIY$沙发$NOR$耶和高级$HIC$电视$NOR$耶！！可见这家伙一定非常
有钱，这么懂得$HIM$享受人生$NOR$，真让人羡慕......


LONG);
	setup();
	replace_program(ROOM);
}
