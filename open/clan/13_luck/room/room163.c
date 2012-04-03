inherit ROOM;
void create() {
	set( "short", "雾之林" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room163",
		"south"     : "/open/clan/13_luck/room/room158.c",
		"north"     : "/open/clan/13_luck/room/room166.c",
		"west"      : "/open/clan/13_luck/room/room163.c",
	]) );
	set( "long", @LONG

　　谜样般的森林，终年浓雾不散，眼前只见白茫茫的一大片，伸手
不见五指。空气中飘散着奇异的腥味，可是你找不到腥味的来源，迷
迷茫茫地看不到远方的景观，万籁寂静中，背脊感到一阵凉意，背后
似乎有人正盯着你看。

LONG);
	setup();
	replace_program(ROOM);
}
