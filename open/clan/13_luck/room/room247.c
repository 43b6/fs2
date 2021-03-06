inherit ROOM;
void create() {
	set( "short", "‘桃花林’ " );
	set( "owner", "poll" );
	set( "object", ([
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/castle/obj/blood-water",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount10" : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/power",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file6"    : "/open/killer/weapon/k_torch",
	]) );
	set( "build", 10008 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room261",
		"north"     : "/open/clan/13_luck/room/room105.c",
	]) );
	set( "long", @LONG
四周长满了浓密的桃花，感觉上好像很漂亮，可是一面白茫茫的桃花林
，不知道要往哪里去，只有依稀听见远方传来一些声音，似乎有人的声音。
只是放眼望过去，整片都是桃花，让你无所适从，四周紧张的空气让你的紧
觉心提高了许多，一步一步的往桃花林的深处走去。
LONG);
	setup();
	replace_program(ROOM);
}
