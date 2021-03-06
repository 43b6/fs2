inherit ROOM;
void create() {
	set( "short", "弃刀冢" );
	set( "object", ([
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/daemon/class/fighter/figring",
		"amount8"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10332 );
	set( "item_desc", ([
		"girl" : @ITEM
半透明带着微红的脸儿，过肩的乌发，略噘的小桃唇，他是
弃刀冢的药僮。不知在多小的时候被雨儿从山林里带回来，
当时身上仅挂着一个刻有‘月’字的玉佩，直到黑夜奔雷ζ
到十三吉祥作客，见其活泼可爱，将她收为义女。
ITEM,
	]) );
	set( "light_up", 1 );
	set( "owner", "del" );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room201",
		"west"      : "/open/clan/ou-cloud-club/room/room147.c",
	]) );
	set( "long", @LONG
穿越几乎腐朽的木门之后，你来到一块满布黄沙的空地
，中央是一个半人高的土堆，土堆前有块石碑，但字迹早已
模糊，北边是一个老旧的小凉亭，上面是两个蒲团跟一张石
桌，你走近一看，桌上还放着一个只下了半局的棋盘跟一壶
浓郁的香茶。几步之外有一位小女孩(girl)正对着你微笑。
□
LONG);
	setup();
	replace_program(ROOM);
}
