inherit ROOM;
void create() {
	set( "short", "������������" );
	set( "build", 10845 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room122",
		"west"      : "/open/clan/hell/room/room127.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
