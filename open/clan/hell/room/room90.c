inherit ROOM;
void create() {
	set( "short", "$HIC$����������ӡ��$HIY$(dagger)$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/obj/bellstar",
		"file7"    : "/open/killer/obj/hate_knife",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 51,
		"amount1"  : 1,
		"amount7"  : 360,
		"amount2"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/killer/obj/dagger",
		"amount9"  : 1,
		"file4"    : "/open/killer/obj/black",
		"amount8"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount6"  : 90000,
	]) );
	set( "light_up", 1 );
	set( "build", 10306 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
