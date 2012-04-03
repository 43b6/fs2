inherit ROOM;
void create() {
	set( "short", "$HIY$Shine On You Crazy Diamond$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file3"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/ping/obj/ring-2",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
	]) );
	set( "owner", "bevis" );
	set( "build", 10023 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room115.c",
		"north"     : "/open/clan/hell/room/room111.c",
		"west"      : "/open/clan/hell/room/room93.c",
		"south"     : "/open/clan/hell/room/room110",
	]) );
	set( "long", @LONG
$HIC$
Nobody knows where you are,how near or how far.
Shine on you crazy diamond.
Pile on many more layers and I'll be joining you there.
Shine on you crazy diamond.
And we'll bask in the shadow of yesterday's triumph,
and sail on the steel breeze.
Come on you boy-child,you winner and loser,
Come on you miner for truth and delusion,and shine
$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
