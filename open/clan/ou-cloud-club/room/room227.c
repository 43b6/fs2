inherit ROOM;
void create() {
	set( "short", "$HIG$��$HIW$ˮ$NOR$" );
	set( "object", ([
		"file1"    : "/open/capital/guard/gring",
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file5"    : "/open/capital/obj/king-cloth",
		"amount8"  : 1,
		"file2"    : "/open/capital/obj/king-belt",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount3"  : 13000,
		"file3"    : "/open/killer/obj/hate_knife",
		"amount7"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/scholar/obj/icefan",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/capital/obj/king-ring",
		"amount1"  : 1,
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10131 );
	set( "owner", "ocean" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room200",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
