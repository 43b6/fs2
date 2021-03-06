// Room : /open/clan/sky-wu-chi/room/room86.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "茱儿的卧房" );
	set( "owner", "juliet" );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/open/killer/obj/kill_yar_head",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file6"    : "/daemon/class/fighter/ywhand",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 14282 );
	set( "long", @LONG
      /＼              ／\
        ▕   ＼＿＿＿＿＿／ ▕
        ▕ ／￣    ◥██◤╲
         ∕                  ﹨    $HBCYN$常常独自一个人在深夜里想着妳    $NOR$
         ︳   /￣\    /￣\   ▕    $HBCYN$  想着我们过去的点点滴滴        $NOR$
         ︳   ︳ZZ   ZZ  ︳  ▕    $HBCYN$    因为过去有太多太多美好的回忆$NOR$
        ┼    \＿/    \＿/    ┼   $HBCYN$      总是在不知不觉中就回想起  $NOR$
         ﹨＿      ●      ＿∕    $HBCYN$        不管我们两相隔多么远    $NOR$
         ˉ╲＿    ．    ＿／_     $HBCYN$          我依然思念着妳        $NOR$
         ╭─◤ˉˉˉ￣◥◤﹨
        （   ︳           /﹀﹀\◢█
       （____︳  ▕ ／  ▕ .．. █◤
             \︿︿/ ︺︺︺＼●／  
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/sky-wu-chi/room/room85",
]) );
	set( "cmkroom", 1 );
	setup();

	}
