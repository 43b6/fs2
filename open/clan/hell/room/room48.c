inherit ROOM;
void create() {
	set( "short", "$HIW$黑轮卧房 - $HIC$防具室$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"file2"    : "/open/killer/obj/k_ring",
		"amount3"  : 1,
	]) );
	set( "build", 10224 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room41.c",
		"south"     : "/open/clan/hell/room/room52",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里便是房具室了，这里满是难得一见的房具
不论是[0;1;32m□[1mK[1m□[1m□[1m□[1m□[0m、[0;1;37m□[1;31m□[1;37m□[1;31m\[1;37m□[1;31m□[0m、甚至[0;1;31m□[1mI[1m□[1m□[1;37m□[1m][1m□[1m□[0m所穿戴之房
具，都没有遗漏，你不禁心想究竟黑轮是有何通天
的本领能取得这些东西阿．

LONG);
	setup();
	replace_program(ROOM);
}
