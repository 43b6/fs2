// Room : /open/clan/red_fire/room/room23.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$��$HIW$������ $MAG$���׹�$HIM$��$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "long", @LONG
    


                              $HIY$���������������� 


                              ������    ������


                              ������    ������

                                  $MAG$����$HIW$����$NOR$



LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "northeast" : "/open/clan/red_fire/room/room22.c",
  "west" : "/open/clan/red_fire/room/room25.c",
]) );
	setup();

	}
