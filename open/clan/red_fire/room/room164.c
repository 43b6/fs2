inherit ROOM;
void create() {
	set( "short", "����ɷ����" );
	set( "owner", "welo" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room115",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
