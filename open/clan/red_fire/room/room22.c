// Room : /open/clan/red_fire/room/room22.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$��$HIW$������ $BLU$��ˮ��$HIM$��$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "long", @LONG
    


                              $HIY$������    ������ 


                              ����������������


                              ������    ������

                                  $BLU$��ˮ$HIW$����$NOR$



LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "north" : "/open/clan/red_fire/room/room21.c",
  "southwest" : "/open/clan/red_fire/room/room23.c",
]) );
	setup();

	}
