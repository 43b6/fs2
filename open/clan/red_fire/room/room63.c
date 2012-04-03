// Room : /open/clan/red_fire/room/room63.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ� $HIM$������$HIW$��$NOR$" );
	set( "object", ([
		"file5"    : "/open/fire-hole/obj/p-pill",
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount9"  : 1,
		"amount2"  : 10,
		"amount8"  : 6,
		"file9"    : "/open/magic-manor/obj/magic-sign",
		"amount5"  : 6,
		"amount7"  : 6,
		"amount3"  : 10,
		"amount1"  : 1,
		"file4"    : "/open/fire-hole/obj/r-pill",
		"file3"    : "/open/fire-hole/obj/y-pill",
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount6"  : 5,
		"file8"    : "/open/fire-hole/obj/b-pill",
		"file7"    : "/open/fire-hole/obj/w-pill",
		"amount4"  : 16,
		"file2"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG
    
                          $HIC$�q  �q  �q  �q 
                        �q�s�q�s�q�s�q�s
                      �q�s�q�s�q�s�q�s
                    �q�s�q�s�q�s�q�s
                  �q�s�q�s�q�s�q�s
                �q�s�q�s�q�s�q�s
                �s  �s  �s  �s

                       $HIY$����$HIM$������$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "exits", ([ /* sizeof() == 3 */
		"north"     : "/open/clan/red_fire/room/room48.c",
		"east"      : "/open/clan/red_fire/room/room66.c",
]) );
	setup();

	}
