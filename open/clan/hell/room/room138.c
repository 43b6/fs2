inherit ROOM;
void create() {
	set( "short", "沙滩" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room141",
	]) );
	set( "long", @LONG
沙滩沿着岸边不断的连绵下去,看来岛的这一头全属于沙岸的类型,北边依然
是密密麻麻的防风林,高大的防风林树木让你无法看到岛上的任何情况,而且也没
办法贸然深入,一个不好迷失在此就更糟糕了,海风不断地在耳边呼啸,看来应该
尽快的找到可以安身的地方了.

LONG);
	setup();
	replace_program(ROOM);
}
