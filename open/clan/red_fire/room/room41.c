// Room : /open/clan/red_fire/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$【$HIR$红莲$HIC$护城河 $HIM$西门大桥$HIY$】$NOR$" );
	set( "object", ([
		"file4"    : "/open/killer/weapon/k_boot3",
		"amount5"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount7"  : 1,
		"file9"    : "/open/ping/obj/neck0",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount6"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"file5"    : "/open/gsword/obj/yu_cloak",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "build", 10040 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
你站在$HIM$桥上$NOR$，向下望着$HIC$护城河$NOR$，好清澈的河水啊，疑？....河底好像
刻了一些$HIW$字$NOR$，怪哉？！是谁有那么大的能耐潜入河水中刻$HIW$字$NOR$啊？真想跳下
去看一看......呵呵呵！......$HIY$南北$NOR$两边都有耶！先跳哪一边啊？！....
..跳下去还起的来吗？......管他的，跳了再说！！


LONG);
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"northdown" : "/open/clan/red_fire/room/room50",
		"east"      : "/open/clan/red_fire/room/room40.c",
		"west"      : "/open/clan/red_fire/room/room120",
		"southdown" : "/open/clan/red_fire/room/room48",
]) );
	setup();

	}
