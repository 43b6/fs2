inherit ROOM;
void create() {
	set( "short", "万里长征楼" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/prayer/obj/crystal2",
		"amount1"  : 1,
		"file2"    : "/open/prayer/obj/crystal1",
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room181",
		"up"        : "/open/clan/13_luck/room/room246",
	]) );
	set( "long", @LONG

　　此楼为记录着小东邪、狂影二代帮主、狂龙、风魔浪子、此四人
的英勇事迹，[0;1;36m□[1mF[1m□[1m□[1m□[1mD[1m□[1m□[1;37m□[1mB[1;32m□[1m□[1m□[1m□[1m□[1m□[1m□[1mB[1;37m□[1mB[1;35m□[1mn[1m□[1mQ[1m□[1m□[1m□[1m□[1;37m□[1mB[1;31m□[1m_[1m□[1m□[1m□[1m□[1m□[1m□[1;37m□[1mB[1;33m□[1mo[1m□[1ms[1m□[1m□[1;37m□[1mB[0m
[0;1;34m□[1m□[1m□[1mB[1m□[1m□[0m、[45m斩天子[0m、[0;1;33;46m□[1mD[1m□[1mZ[1m□[1mt[0m、[30;47m取的鬼王头[0m、[41m凯旋胜利归[0m。之后此四人就
成为帮派的重要角色、也被归为[0;1;31m□[1mN[1m□[1m□[1m□[1mK[1m□[1m□[0m中。 

LONG);
	setup();
	replace_program(ROOM);
}
