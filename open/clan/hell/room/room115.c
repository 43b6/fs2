inherit ROOM;
void create() {
	set( "short", "$BLK$$BWHT$JEREMY$NOR$" );
	set( "owner", "pearljam" );
	set( "object", ([
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/magic-manor/obj/lin-cloud-fan",
		"amount4"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file6"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 12084 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room114.c",
		"east"      : "/open/clan/hell/room/room9.c",
		"west"      : "/open/clan/hell/room/room112",
		"south"     : "/open/clan/hell/room/room113.c",
	]) );
	set( "long", @LONG
$HIW$
at home...drawing picture...of mountaintops..with him on top
lemin yellow sun...arms raised in a V...dead lay in pools of
maroon below...Daddy didn't give attention...to the fact that
Mommy didn't care...King Jeremy the wicked...ruled his world.

              Jeremy spoke in class today
              Jeremy spoke in class today

clearly I remember...picking on the doy...seemed a harmless little
fuck...but we unleashed a lion...gnashed his teeth,bit the recess
ladies breast...how could I forget...he hit me with surprise left
my jaw left hurtin...dropped wide open...just like the day...like
the day I heart...Daddy didn't give affection...and the boy was
something that Mommy wouldn't wear...King Jeremy the wicked...
                   ruled his world.

              Jeremy spoke in class today
              Jeremy spoke in class today

Try to forget this...try to erase this....from the blackboard
$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
