inherit ROOM;
void create() {
	set( "short", "$MAG$��������$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room76",
	]) );
	set( "build", 1530 );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
