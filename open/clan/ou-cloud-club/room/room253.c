inherit ROOM;
void create() {
	set( "short", "$HIR$��$HIC$��$HIY$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/ping/obj/ring-2",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount5"  : 1,
		"file4"    : "/open/gsword/obj/ring-1",
		"file3"    : "/open/gsword/obj/dragon-sword",
		"file2"    : "/open/gsword/obj/may_ring",
		"amount6"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/ping/obj/ring-2",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "light_up", 1 );
	set( "build", 10012 );
	set( "owner", "bobe" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room247",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
