inherit ROOM;
void create() {
	set( "short", "$HIR$ħ����$NOR$" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"amount3"  : 12,
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
	]) );
	set( "owner", "etc" );
	set( "build", 11064 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room219",
		"east"      : "/open/clan/ou-cloud-club/room/room211.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
