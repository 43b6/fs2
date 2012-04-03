inherit ROOM;
void create() {
	set( "short", "雾之林小径" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room168",
		"south"     : "/open/clan/13_luck/room/room169.c",
		"west"      : "/open/clan/13_luck/room/room182.c",
		"north"     : "/open/clan/13_luck/room/room168.c",
		"down"      : "/open/clan/13_luck/room/room167",
	]) );
	set( "long", @LONG

　　一条被野草覆盖的小路，使你不得用手拨开草丛才能通行，加上
漫天的白雾，可以想像的到这条小径是多么的难走，使你不得不小心
亦亦的往前。越靠近洞穴，那稀稀嗦嗦的声音就越来越大声，使你不
得不提高警觉，以防任何状况发生。

LONG);
	setup();
	replace_program(ROOM);
}
