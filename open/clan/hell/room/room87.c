inherit ROOM;
void create() {
	set( "short", "ɱ��֮��" );
	set( "owner", "taxi" );
	set( "object", ([
		"amount5"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mogi/village/obj/mogi_ring",
		"file5"    : "/open/mogi/village/obj/mogi_ring",
		"file4"    : "/open/mogi/village/obj/mogi_ring",
		"amount8"  : 1,
		"file10"   : "/open/killer/weapon/k_torch",
		"file8"    : "/open/mogi/village/obj/mogi_ring",
		"file1"    : "/open/mogi/village/obj/mogi_ring",
		"amount7"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/mogi/village/obj/mogi_ring",
		"amount3"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mogi/village/obj/mogi_ring",
		"amount10" : 1,
		"file7"    : "/open/mogi/village/obj/mogi_ring",
	]) );
	set( "build", 11020 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/hell/room/room102.c",
		"out"       : "/open/clan/hell/room/hall.c",
		"up"        : "/open/clan/hell/room/room41.c",
	]) );
	set( "long", @LONG
    |>>>                                  |>>>>>               |>>>
        |                    |             |  |                    *
       _|_ _ _               *             *  |                   / \
      | U U U |            _/ \           / \ |                  /___\
       \-----/            |/   \_________/   \|                  | [*]
     * []    |            /     \       /     \                  | [*]
    / \|_ _ _|_          /       \     /       \          _ _ _ _|   |
   /___\ U U U |        {#########}   {#########}        | U U U |  []
   [   ]======/          \=======/     \=======/          \======|  []
   [[] ] []   |           |     |_ _ _ _|     |           |   [] |___|
   [___]      |_ _ _ _ _ _| []  | U U U |  [] |_ _ _ _ _ _|      \===/
   [===]  []  | U U U U U |     |---|---|     | U U U U U |  []   \=/
    \=/       |===========| []  |  -O-  |  [] |===========|        |
     |        |           |     |___|___|     |           |        |
     |        |           |     |||||||||     |           |        |
     |        |           |     ||ooooo||     |           |        |
   _-|________|-----------|_____||     ||_____|-----------|________|-_-_
    /__________\         /______||_____||______\         /__________\
   (____________)-------(_______|/_____\|_______)-------(____________) 

LONG);
	setup();
	replace_program(ROOM);
}
