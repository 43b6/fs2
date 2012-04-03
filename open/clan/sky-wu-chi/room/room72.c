// Room : /open/clan/sky-wu-chi/room/room72.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIC$��$HIR$��$HIY$������$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount3"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/killer/obj/k_ring",
		"amount9"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file8"    : "/daemon/class/fighter/ywhand",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "light_up", 1 );
	set( "build", 10801 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room55.c",
		"east"      : "/open/clan/sky-wu-chi/room/room169.c",
		"up"        : "/open/clan/sky-wu-chi/room/room33.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"west"      : "/open/clan/sky-wu-chi/room/room127.c",
	]) );
	set( "long", @LONG
[0;1m [1m [1m [1m [1m [1m��[1mU[1m [1m��[1mE[1m [1m [0;1;5m [1;5m��[1;5m��[0;1m [1m [1;34m��[1mE[1;37m [1m [1m [1m [1m [0;1;5;36m��[1;5mE[0;1;37m [1m [1m [1m [1m [1m��[1mE[1m [0;1;5;36m��[1;5mE[0;1;32m [1m��[1m��[1m��[1m��[1;37m [1m [1m��[1mE[1m [0;1;5;33m��[1;5m��[0;1;37m [0;1;5;36m��[1;5mE[0;1;37m [1;31m [1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mi[1m��[1m��[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m��[1m��[0;1;5m��[1;5mE[0;1m��[1m��[1m [1m��[1mE[1m [1;35m��[1mE[1;37m [1m [1m [1m [0;1;5;33m��[1;5mE[0;1;37m [1m��[1mE[1m [1m [0;1;5;36m��[1;5m��[0;1;37m [1;33m��[1mE[1;37m [1m��[1mE[1m [1m [1;32m��[1m��[1m��[1mi[1m��[1m��[1;37m��[1mE[1m [1;36m��[1mE[1;37m [1m [1m [1m [1;31m��[1m��[1m��[1mi[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1mi[1m��[1mi[1m��[1m��[1;37m [0;1;5;36m��[1;5m��[0;1;37m [1m��[1mE[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1mU[1m��[1ms[1m��[1ms[1m [1m��[1m��[1m��[1m��[1m [1m [1m [1m [1;32m��[1m��[1m��[1m��[1;37m [1m [0;1;5;32m��[1;5mE[0;1;37m [1m [1m [1m [1;31m��[1m��[1;32m [1m��[1m��[1m��[1mi[1m��[1mi[1m��[1m��[1;37m [0;1;5;35m��[1;5m��[0;1;37m [1m [1;33m��[1mE[1;37m [1m [1m��[1mi[1m��[1mi[1m��[1mp[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m [0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m][1m [1m [1m��[1m��[1m��[1m^[1m [1m [1m [1m��[1m^[1m [1;32m��[1m��[1m��[1mi[1m��[1m��[1;37m [1m [1;33m��[1m��[1;37m [1m [0;1;5;35m��[1;5mE[0;1;37m [1;32m��[1m��[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1m��[1;37m [1m��[1mE[1m [1;36m [1m��[1m��[1;37m [1m��[1mi[1m��[1mx[1m��[1mp[1m��[1mi[1m��[1mq[1m��[1mq[1m��[1mi[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m��[1m][1m [1m [1m��[1m��[1m��[1m^[1m [1m [1m [1m��[1m^[1;32m��[1m��[1m��[1mi[1m��[1mi[1m��[1m��[1;37m [1m [1m[0[0;1m��[1mb[1m��[1mc[1m��[1me[1m��[1mf[1m��[1mh[1m��[1mi[1m��[1mh[1m��[1mg[1m��[1mf[1m��[1me[1m��[1md[1m��[1mc[1m��[1mi[1m��[1mx[1m��[1mp[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mb[1m��[1mc[1m��[1md[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m��[1mv[1m��[1mv[1m��[1m��[1m��[1mv[1m [1m��[1m��[1m [1m[0[0;1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[1;36m��[1mp[1m��[1mY[1;37m-[1;33m��[1m��[1m��[1mx[1m��[1mU[1m��[1m��[1;37m-[1m��[1mi[1m��[1mi[1m��[1mi[1m��[1mi[0m
LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
