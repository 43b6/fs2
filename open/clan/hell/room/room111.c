inherit ROOM;
void create() {
	set( "short", "$HIY$Wish You Were Here$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"file3"    : "/open/start/obj/k_cloth",
		"file2"    : "/open/start/obj/ten_pen",
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/scholar/obj/silver-pen",
	]) );
	set( "owner", "bevis" );
	set( "build", 10548 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room114",
		"west"      : "/open/clan/hell/room/room96.c",
		"south"     : "/open/clan/hell/room/room112",
	]) );
	set( "long", @LONG
$NOR$
     $HIW$$BBLU$so,so you think you can tell heaven from hell,blue skies from pain$NOR$
  $HIW$$BBLU$can you tell a green field from a cold steel rail? a smile from a veil,$NOR$
                      $HIW$$BBLU$do you think you can tell??$NOR$

   $HIW$$BBLU$and did you exchange a walk on part in the war for a lead-role in a cage?$NOR$
           $HIW$$BBLU$hot air for a cool breeze? cold comfort for change?$NOR$
 $HIW$$BBLU$and did they get you to trade your heroes from ghosts? hotashes from tees?$NOR$

                  $HIW$$BBLU$how i wish,how i wish you were here.$NOR$
    $HIW$$BBLU$we're just two lost souls,swimming in a fish bowl,year after year$NOR$
$HIW$$BBLU$running over the same old ground. what have we found? the same old fears$NOR$
                         $HIW$$BBLU$wish you were here$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
