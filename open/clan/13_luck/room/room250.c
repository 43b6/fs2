inherit ROOM;
void create() {
	set( "short", "‘山路’" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room78.c",
		"north"     : "/open/clan/13_luck/room/room252",
	]) );
	set( "long", @LONG
从刚刚热闹的街道往北边走了过来，不禁觉得精神气爽。抬头一看，只
见到一座雄伟的山矗立在你的眼前，让你觉得心胸开阔了起来。而刚刚街道
的热闹感也似乎消失了，取而代之的却是一股平心静气的感觉，仿佛居住在
世外桃源一般，即使是条漫长的道路，但是当作是健身的散步、爬山等等的
运动，对你自己的身体也是有帮助的。
LONG);
	setup();
	replace_program(ROOM);
}
