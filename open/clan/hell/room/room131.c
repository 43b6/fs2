inherit ROOM;
void create() {
	set( "short", "������" );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room132",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
