inherit ROOM;
void create() {
	set( "short", "$MAG$��������$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room76",
	]) );
	set( "build", 1156 );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
