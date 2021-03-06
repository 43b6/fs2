inherit ROOM;
void create() {
	set( "short", "$HIR$$BWHT$阿噜米的任务室$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount3"  : 348,
		"amount5"  : 402,
		"file8"    : "/open/doctor/pill/gnd_pill",
		"amount4"  : 390,
		"amount6"  : 129,
		"file1"    : "/open/doctor/pill/gnd_pill",
		"file7"    : "/open/doctor/pill/human_pill",
		"amount1"  : 402,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file3"    : "/open/doctor/pill/sky_pill",
		"file4"    : "/open/doctor/pill/human_pill",
		"amount8"  : 48,
		"amount7"  : 166,
	]) );
	set( "item_desc", ([
		"pigpig" : @ITEM
美丽ITEM,
		"pss" : @ITEM
美丽
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10167 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room306",
		"south"     : "/open/clan/sky-wu-chi/room/room105.c",
		"east"      : "/open/clan/sky-wu-chi/room/room155.c",
	]) );
	set( "long", @LONG
整个武林，最近掀起一阵恐慌，传说〔$CYN$黑牙联杀手$NOR$〕又
再度活跃起来，每个人莫不惊慌害怕。整个房间传来一阵血
腥的杀气，桌子上到处是散乱的纸堆，墙上也满是武功招式
的痕迹还看见很多机关，似乎通往很多地方？莫非这里便是....？
LONG);
	setup();
	replace_program(ROOM);
}
