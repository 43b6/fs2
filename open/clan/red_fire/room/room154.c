inherit ROOM;
void create() {
	set( "short", "��Ҷ�ֳ���" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room153",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
