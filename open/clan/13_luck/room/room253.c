inherit ROOM;
void create() {
	set( "short", "‘决斗场’" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room251",
	]) );
	set( "long", @LONG
你现在正站在决斗场中，因为这里是我廖官人特许玩家们一较高低的
地方，所以即使在决斗中被对方杀死也没有任何关系，并不会有技能下降
及武术减少的状况发生，东边墙角上则悬挂着比赛规则(board)。
在这里pk...死了不是我的事...以上纯属需构
LONG);
	setup();
	replace_program(ROOM);
}
