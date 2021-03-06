inherit ROOM;
void create() {
	set( "short", "$HIY$寒风山庄$NOR$--$GRN$道馆旁小径$NOR$ " );
	set( "owner", "lonsan" );
	set( "object", ([
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file7"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"file4"    : "/open/ping/obj/cloud_fan",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/ping/obj/poison_pill",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount2"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 81,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 11066 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room141.c",
		"out"       : "/open/clan/sky-wu-chi/room/room55",
	]) );
	set( "long", @LONG
从$HIG$绿荫大道$NOR$转到小路上，四周的环境逐渐趋于宁静，猛烈的练武气势也不在逼
人，许多不知名的鸟类和麻雀，在两旁树荫遮天的大树上飞跳嘻闹着，走在路上，
心里也平静许多，慢慢升起祥和之气。在苍蓊浓郁的大树下，长着许多不知名的花
草，五颜六色，争相夺艳，还有一些奇怪的草药，散发出独特的气味，让人闻了有
恢复体力的感觉。道路向北延伸，走靠近一些似乎还能隐隐约约听的到朗朗的读书
声，看来北边是一个书院。

LONG);
	setup();
	replace_program(ROOM);
}
