inherit ROOM;
void create() {
	set( "short", "藏龙阁" );
	set( "owner", "long" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room62.c",
	]) );
	set( "long", @LONG
龙，狂想空间中的一位传奇人物，有着高深莫测的武学修
诣，但当其在狂想中成为第一个将武学修为突破成学究天人的
同时，他也就像在人世间蒸发般，使人无法得知其去像，却原
来是隐居在十三吉祥中的相思林中，过着隐士般的生活．

LONG);
	setup();
	replace_program(ROOM);
}
