inherit ROOM;
void create() {
	set( "short", "ɱ��֮��һ¥��㳡" );
	set( "object", ([
		"amount5"  : 1,
		"amount1"  : 1,
		"file9"    : "/open/killer/weapon/k_head3",
		"amount2"  : 206,
		"amount6"  : 1,
		"file3"    : "/open/killer/weapon/k_boot3",
		"file4"    : "/open/killer/weapon/k_cloth3",
		"file5"    : "/open/killer/weapon/k_arm3",
		"amount8"  : 1,
		"file10"   : "/open/killer/weapon/k_boot3",
		"file1"    : "/open/killer/weapon/k_torch",
		"file8"    : "/open/killer/weapon/k_arm3",
		"amount7"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/killer/obj/hate_knife",
		"file6"    : "/open/killer/weapon/k_head3",
		"amount10" : 1,
		"file7"    : "/open/killer/weapon/k_cloth3",
	]) );
	set( "owner", "oracle" );
	set( "build", 10392 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room87.c",
		"east"      : "/open/clan/hell/room/room101.c",
		"west"      : "/open/clan/hell/room/room100",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
