inherit ROOM;
void create() {
	set( "short", "min��˽����3" );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room18",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
