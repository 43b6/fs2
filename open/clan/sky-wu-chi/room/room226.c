inherit ROOM;
void create() {
	set( "short", "$HIC$【小佩的衣物间】$NOR$" );
	set( "owner", "peiyi" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file4"    : "/obj/gift/bingtang",
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/g_pill",
		"amount2"  : 1,
		"file3"    : "/open/doctor/pill/taii_pill",
		"amount5"  : 1,
		"file8"    : "/open/mogi/dragon/obj/key",
		"amount4"  : 1,
		"file2"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"amount1"  : 1,
		"file1"    : "/open/poison/obj/feather",
		"file7"    : "/obj/gift/bingtang",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/obj/gift/hobowdan",
		"file5"    : "/open/killer/obj/k_ring",
		"amount3"  : 287,
		"amount7"  : 1,
		"amount6"  : 287,
		"amount9"  : 1,
	]) );
	set( "build", 11616 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room303.c",
		"south"     : "/open/clan/sky-wu-chi/room/room74.c",
		"east"      : "/open/clan/sky-wu-chi/room/room311.c",
		"west"      : "/open/clan/sky-wu-chi/room/room302.c",
	]) );
	set( "long", @LONG
好不容易挤进这个小小的空间，这里四周都是女孩子的衣物，小小只能容许一
个人转身的空间里，竟然能放的下上千套的服装，只因为小佩的服装也是小小的。
在进门的左手边有着三排的衣架，上面放的是小佩出门时穿的漂漂衣服，这些有的
仅是小佩个人的收藏，并没有穿过，而前方是三层的柜子，里面放的是小佩的贴身
衣物还有一些个人的物品，包括有一个医药箱，里面放着一些神奇的药物，还有一
些小佩个人珍藏的宝贝，而右手边上面放的是小佩跳舞时穿的特殊服装，还有一些
休闲服，下面摆的是好几排的鞋子，各式各样各种颜色。
LONG);
	setup();
	replace_program(ROOM);
}
