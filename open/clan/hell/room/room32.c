inherit ROOM;
void create() {
	set( "short", "$HIB$刀坟$NOR$" );
	set( "light_up", 1 );
	set( "build", 10072 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
一个不起眼的土堆上面差着数十把金光闪闪的刀,仔细看看不全都是各著名刀
手所常用的兵刃嘛,她们死后生前所赖以成名的武器,也全都被阎罗王收集到此处
想到地府鬼师深不可测的实力,能够拿到这些兵刃,你不禁不寒而栗,此地也不定时
的透出阵阵阴寒之气

LONG);
	setup();
	replace_program(ROOM);
}
