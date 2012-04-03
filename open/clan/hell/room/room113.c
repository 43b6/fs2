inherit ROOM;
void create() {
	set( "short", "$HIC$$BMAG$BRAIN OF J.$NOR$" );
	set( "owner", "pearljam" );
	set( "object", ([
		"file6"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount1"  : 7,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file1"    : "/open/fire-hole/obj/b-pill",
		"amount2"  : 5,
		"amount6"  : 1,
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount3"  : 1,
	]) );
	set( "build", 11586 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room115.c",
		"west"      : "/open/clan/hell/room/room110",
	]) );
	set( "long", @LONG
$NOR$
$HIM$$BCYN$who's____________ got the brain of jfk____________...
what's it mean to us now______________...?
the whole__________... will be different soon _________...
the whole__________... will be relieved _________...
been taught_________...whipped into shape____________...
got you in line__________... behind the stripe____________...
the whole__________... will be different soon _________...
the whole__________... will be relieved _________...

$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
