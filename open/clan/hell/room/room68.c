inherit ROOM;
void create() {
	set( "short", "$HIG$绿龙$NOR$区" );
	set( "build", 10441 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room27",
	]) );
	set( "long", @LONG

绿龙精元..是刀克梦寐以求的良药...
因为刀克服用它之后,马上生龙活虎...全身的血液都在沸腾

你此时一定又有疑惑了
为何绿龙精元有如此神效...??

哎呀! 早教你多唸点书了..
这也是食物链的关系...
因为绿龙只是简称...其实它真正的全名是 戴绿帽的龙...
你想想..戴绿帽...一定很火爆啰..
所以你吃了绿龙精元后...一定更火爆 @@?

LONG);
	setup();
	replace_program(ROOM);
}
