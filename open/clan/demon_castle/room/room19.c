inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/gsword/obj/yu-armband",
		"amount2"  : 1,
		"file4"    : "/open/gsword/obj/yubracelet",
		"amount7"  : 1,
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount9"  : 1,
		"file8"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"file9"    : "/open/gsword/obj/dragon-cloth",
		"amount5"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/gsword/obj/yu-legging",
		"amount6"  : 1,
		"file5"    : "/open/gsword/obj/yuboots",
		"file1"    : "/open/gsword/obj/yugem",
		"file7"    : "/open/gsword/obj/yu_cloak",
	]) );
	set( "owner", "mory" );
	set( "light_up", 1 );
	set( "build", 10377 );
	set( "exits", ([
		"east"      : "/open/clan/demon_castle/room/room6.c",
		"west"      : "/open/clan/demon_castle/room/room29",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
