inherit ROOM;
void create() {
	set( "short", "�ϴ��ϴ����" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"file1"    : "/open/sky/obj6/sun_diamond",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11526 );
	set( "owner", "bebe" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room117",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
