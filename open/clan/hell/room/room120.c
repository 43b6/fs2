inherit ROOM;
void create() {
	set( "short", "min��˽����2" );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room18",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
