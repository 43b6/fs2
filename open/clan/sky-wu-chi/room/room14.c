// Room : /open/clan/sky-wu-chi/room/room14.c
inherit ROOM;
void create(){
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
这里是花巷草弄一号，身旁的是小新
的狗窝，看起来小小的，其实是个大宅院
里面是小新家的人所住的房间，平常早上
小新家的人都不在，所以看起来空空荡荡
的，不过仔细一瞧，还是有人嘛。。。。
只不过小新家的人都在睡而以。

LONG);
	set( "short", "$HIC$【$NOR$小新家大门$HIC$】$NOR$小狗窝" );
	set( "owner", "eric" );
	set( "object", ([
		"amount7"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"amount10" : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/port/obj/wolf_ring",
		"amount8"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10043 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room8.c",
		"out"       : "/open/clan/sky-wu-chi/room/room112",
		"enter"     : "/open/clan/sky-wu-chi/room/room154.c",
	]) );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
