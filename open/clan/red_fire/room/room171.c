inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$��Ժ $HIM$��$NOR$" );
	set( "owner", "fsmud" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/doctor/pill/sky_pill",
		"file3"    : "/open/killer/ninja/find/gmap",
		"amount8"  : 1,
		"file8"    : "/open/center/obj/gamble_book",
		"file2"    : "/open/killer/ninja/find/gmap",
		"amount10" : 1,
		"file9"    : "/open/mogi/castle/obj/fire_book",
		"amount1"  : 1,
		"amount7"  : 1,
		"amount5"  : 4,
		"file1"    : "/open/killer/ninja/find/gmap",
		"amount4"  : 1,
		"file10"   : "/open/killer/obj/dagger",
		"amount6"  : 10,
		"file4"    : "/open/killer/ninja/find/gmap",
		"file6"    : "/open/doctor/pill/human_pill",
		"amount3"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/snow/obj/book",
	]) );
	set( "build", 10260 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room170",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
