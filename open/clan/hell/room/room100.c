inherit ROOM;
void create() {
	set( "short", "������" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room102",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
