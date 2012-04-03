inherit ROOM;
void create() {
	set( "short", "浪翻云的石屋" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room127",
		"east"      : "/open/clan/hell/room/room108.c",
	]) );
	set( "long", @LONG
一所筑在怒蛟岛南一个小山谷内的石屋。这是岛上最僻静的地方
，一里内再无其他人家。兼且石屋藏在山谷的尽头，屋前小桥流水，
非常幽雅。
万里入无径，千峰掩一篱。
屋前的小窗，因为山势颇高，恰好看到一小截洞庭湖的湖水。
洞庭湖潮水涨退的声音，隐隐可闻。
LONG);
	setup();
	replace_program(ROOM);
}
