// Room : /open/clan/red_fire/room/room51.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ� $HIM$������$HIW$��$NOR$" );
	set( "object", ([
		"file4"    : "/u/d/dhk/questsfan/obj/diamond_legging",
		"amount4"  : 1,
		"file7"    : "/u/d/dhk/questsfan/obj/diamond_hairpin",
		"file9"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"amount6"  : 1,
		"amount2"  : 1,
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"amount7"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"file6"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount9"  : 1,
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_hands",
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_skirt",
		"amount5"  : 1,
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"file1"    : "/open/ping/obj/cloud",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG
        
                $HIC$�r  �r  �r  �r
                �t�r�t�r�t�r�t�r
                  �t�r�t�r�t�r�t�r
                    �t�r�t�r�t�r�t�r
                      �t�r�t�r�t�r�t�r
                        �t�r�t�r�t�r�t�r
                          �t  �t  �t  �t

                       $HIY$����$HIM$������$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room67.c",
		"out"       : "/open/clan/red_fire/room/hall",
		"north"     : "/open/clan/red_fire/room/room49.c",
]) );
	setup();

	}
