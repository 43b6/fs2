// Room : /open/clan/red_fire/room/room25.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$��$HIW$������ $YEL$���ع�$HIM$��$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "long", @LONG
    


                              $HIY$������    ������ 


                              ������    ������


                              ������    ������

                                  $YEL$����$HIW$����$NOR$



LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "northwest" : "/open/clan/red_fire/room/room26.c",
  "east" : "/open/clan/red_fire/room/room23.c",
]) );
	setup();

	}
