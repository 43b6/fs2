inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "object", ([
		"file5"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
	]) );
	set( "owner", "mory" );
	set( "build", 10001 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room23",
		"west"      : "/open/clan/demon_castle/room/room25",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
