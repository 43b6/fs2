inherit ROOM;
void create() {
	set( "short", "地灵丹药柜" );
	set( "build", 3429 );
	set( "owner", "amei" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room293",
	]) );
	set( "long", @LONG
这里是AMEI摆三种救命丹药之中的地灵丹的地方，他的最大功效
就是能解百毒，不过可惜的是他却无法解除七魔将和黑白双煞的
入灭之毒，真是有点可惜。。。这里摆满了丹药看起来价值不菲。。
你假如想要拿一些记得要跟AMEI说一下O 。。。。
LONG);
	setup();
	replace_program(ROOM);
}
