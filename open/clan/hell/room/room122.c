inherit ROOM;
void create() {
	set( "short", "������������" );
	set( "build", 10212 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room121",
		"west"      : "/open/clan/hell/room/room123.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
