inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "object", ([
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
	]) );
	set( "owner", "mory" );
	set( "build", 10006 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/demon_castle/room/room23",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
