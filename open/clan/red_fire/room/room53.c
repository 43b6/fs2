// Room : /open/clan/red_fire/room/room53.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��$HIC$���Ǻ� $HIM$������$HIW$��$NOR$" );
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
		"west"      : "/open/clan/red_fire/room/room64.c",
		"south"     : "/open/clan/red_fire/room/room52.c",
]) );
	setup();

	}
