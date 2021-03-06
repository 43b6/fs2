// Room : /open/clan/sky-wu-chi/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/sky-wu-chi/room/room132",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/room128",
		"out"       : "/open/clan/sky-wu-chi/room/room21",
]) );
	set( "cmkroom", 1 );
	set( "long", @LONG
门口屏风画着山水风光,你的目光越过屏风,虽然只见到房内一小部分,
但里面的雅致已让你觉得如沐春风,此时耳中传来思量阵阵低吟{明朝散发
弄扁舟},你更想一睹其人了. ^_^;
正当你提起脚步往房内走去时,
你感觉右侧的假山似乎怪怪的,
在你仔细察探下发觉上面某块青苔有被人移动过的迹象,
你拨开青苔发现一颗按纽,
在好奇心驱使下压下按钮,
轰的一声,假山后多了一条向下的楼梯.....
LONG);
	set( "short", "$HIC$思量之家$HIW$大厅$NOR$" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/daemon/class/fighter/figring",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file5"    : "/open/wind-rain/obj/sun_red_cloth",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/wu/npc/obj/armband",
	]) );
	set( "owner", "salicili" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10034 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
