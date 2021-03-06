inherit ROOM;
void create() {
	set( "short", "空瓶子卧房" );
	set( "object", ([
		"file7"    : "/open/killer/obj/knief3",
		"amount6"  : 46330,
		"amount7"  : 46302,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 66411,
		"file8"    : "/open/killer/obj/lustar",
		"amount9"  : 16745,
		"file6"    : "/open/killer/obj/knief2",
		"amount1"  : 1,
		"file5"    : "/open/killer/obj/knife",
		"file9"    : "/open/killer/obj/needle",
		"amount8"  : 74076,
	]) );
	set( "owner", "ywarter" );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room137.c",
		"south"     : "/open/clan/sky-wu-chi/room/room134.c",
		"east"      : "/open/clan/sky-wu-chi/room/room133",
		"north"     : "/open/clan/sky-wu-chi/room/room135.c",
	]) );
	set( "long", @LONG
这里是这整个庄院的主人[1;37m空瓶子[0m的卧室，里面朴素的自然，一点
也没有像是拥有绝世武学及广大的庄院的的人所应该有的华丽，简单
的一张大理石圆桌及双人通铺外，其它的都不值一提。唯一特别的是
墙上所挂的一对爪子，像是有点像动物一样的爪子，但是颜色却是有
如黄金般的让人感觉此物必定来自天外之物所有，且像是有灵性般的
当你一走进来时居然发出嗡嗡嗡的声响。似乎对你的闯入感到有种威
胁而要做反击的声音。

LONG);
	setup();
	replace_program(ROOM);
}
