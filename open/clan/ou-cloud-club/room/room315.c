inherit ROOM;
void create() {
	set( "short", "������" );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "owner", "slap" );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
