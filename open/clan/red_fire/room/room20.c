// Room : /open/clan/red_fire/room/room20.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "short", "$HIM$��$HIW$������ $HIC$�����$HIM$��$NOR$" );
	set( "build", 12800 );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "long", @LONG



                              $HIY$���������������� 


                              ����������������


                              ����������������

                                  $HIC$����$HIW$����$NOR$



LONG);
	set( "exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/clan/red_fire/room/room21.c",
  "out" : "/open/clan/red_fire/room/room12.c",
]) );
	setup();

	}
