// Room : /open/clan/red_fire/room/room27.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$��$HIW$������ $HIR$����$HIM$��$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount4"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount1"  : 58,
		"file3"    : "/obj/gift/bingtang",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"amount3"  : 1,
		"amount2"  : 21,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount10" : 1,
		"file7"    : "/open/fire-hole/obj/g-pill",
		"amount8"  : 1,
		"file6"    : "/open/gsword/obj/may_ring",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10002 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "long", @LONG
    


                              $HIY$���������������� 


                              ������    ������


                              ����������������

                                  $HIR$���$HIW$����$NOR$



LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"northeast" : "/open/clan/red_fire/room/room155.c",
		"south"     : "/open/clan/red_fire/room/room26.c",
]) );
	setup();

	}
