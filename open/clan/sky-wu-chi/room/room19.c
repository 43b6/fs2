inherit ROOM;
void create() {
	set( "short", "B" );
	set( "exits", ([
		"bor"       : "/open/clan/sky-wu-chi/room/room315",
		"borstquc"  : "/open/clan/sky-wu-chi/room/room18",
		"biwem"     : "/open/clan/sky-wu-chi/room/room175",
		"bookman"   : "/open/clan/sky-wu-chi/room/room275",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"bbsman"    : "/open/clan/sky-wu-chi/room/room119",
		"bluefox"   : "/open/clan/sky-wu-chi/room/room94.c",
		"bacchus"   : "/open/clan/sky-wu-chi/room/room263",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
在一阵七彩的光芒笼罩后..你出现再一个奇异的空间[0;1;35mB[0m里
由于刀神燕仔的力量...你在这里呼唤你自己的名字.....
就可以得到天道无极给你的奇异幻界...在这..你可以修练
你的武学...因为在结界的庇佑下...相信..一定能早日达到
深不可测的地步.....
LONG);
	setup();
	replace_program(ROOM);
}
