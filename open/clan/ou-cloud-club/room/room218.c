inherit ROOM;
void create() {
	set( "short", "$HIR$亲密$HIM$接触$NOR$" );
	set( "owner", "flyindance" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/dancer/obj/maple_ribbon",
		"file9"    : "/daemon/class/fighter/armband",
		"file6"    : "/open/mogi/castle/obj/leave",
		"file2"    : "/open/snow/obj/book",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/mountain/obj/frog-pill",
		"file4"    : "/obj/gift/bingtang",
		"file5"    : "/open/mogi/castle/obj/blood-water",
		"file3"    : "/open/gblade/obj/book",
		"amount1"  : 112,
		"amount7"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/magic-manor/obj/leaf",
	]) );
	set( "build", 10125 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room149",
	]) );
	set( "long", @LONG
　　　　　　　　　　　　　
我轻轻地舞着，在拥挤的人群之中。 
你投射过来异样的眼神。 
诧异也好，欣赏也罢。 
并不曾使我的舞步凌乱。 
因为令我飞扬的，不是你注视的目光。 
而是我年轻的心。
　　　　　　　　　　　　　轻舞飞扬
LONG);
	setup();
	replace_program(ROOM);
}
