inherit ROOM;
void create() {
	set( "short", "������ʦ����ĵط� - /open/wiz/hall1" );
	set( "object", ([
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/killer/obj/dagger",
		"file8"    : "/open/killer/weapon/k_head3",
		"amount5"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/killer/weapon/k_boot3",
		"amount7"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/killer/obj/dagger",
		"file6"    : "/open/killer/obj/k_ring",
		"amount3"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/prayer/obj/lin-head",
		"file7"    : "/open/port/obj/wolf_ring",
		"file5"    : "/open/killer/weapon/k_arm3",
		"file1"    : "/open/tendo/obj/red_dragon_chain",
		"amount1"  : 1,
		"file3"    : "/open/killer/weapon/k_cloth3",
	]) );
	set( "owner", "ssc" );
	set( "light_up", 1 );
	set( "build", 11226 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room2",
		"west"      : "/open/clan/hell/room/room133",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
