inherit ROOM;
void create() {
	set( "short", "$HIY$$BCYN$SMILE$NOR$" );
	set( "owner", "pearljam" );
	set( "object", ([
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
	]) );
	set( "build", 10140 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room111",
		"south"     : "/open/clan/hell/room/room115.c",
	]) );
	set( "long", @LONG
$HIY$
Don't you make me smile.....
Don't you make me smile.....

when the sun don't Shine.......Don't Smile.....
Don't you make me smile.....

$HIM$
Don't it make you smile.....
Don't it make you smile.....
when the sun don't Shine.......Don't Smile.....
Don't it make you smile.....

$HIY$
Miss .......Al.....
This is How I Feel......Don't

$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
