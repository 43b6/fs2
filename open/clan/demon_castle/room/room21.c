inherit ROOM;
void create() {
	set( "short", "�Ʒ����Ҧ�" );
	set( "owner", "son" );
	set( "build", 10003 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room4",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
