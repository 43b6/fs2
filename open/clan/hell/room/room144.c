inherit ROOM;
void create() {
	set( "short", "沙滩" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room141",
		"west"      : "/open/clan/hell/room/room94.c",
	]) );
	set( "long", @LONG
踏在雪白的沙粒上前进,本该是一件惬意的事,但此刻的你完全没有这种悠闲
的心情,沙子沿着岸边的形状弯弯曲曲的往东边绵延下去,你运着轻功上面不断奔
驰着,只想赶快找到进入岛上的道路,波浪一波波的打上来,跟你着急的心情一点都
不相称.

LONG);
	setup();
	replace_program(ROOM);
}
