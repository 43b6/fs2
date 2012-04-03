inherit ROOM;
void create() {
	set( "short", "$HIC$聚灵武器封印区$HIY$(icer)$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "build", 11034 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
走进这招待所里你发现空瓶子是一个很简仆的人..并不像
外面所讲的那样般邪恶..但是又有谁会相信呢..呵呵..所以只好
在继续当他的恶人型像游走于四方..但是他还是多少会
有那么一些落漠吧..但是他并不气馁..他还是在这个招待所里等着大
家来光临..他会敞开大门的

LONG);
	setup();
	replace_program(ROOM);
}
