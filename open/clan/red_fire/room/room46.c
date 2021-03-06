// Room : /open/clan/red_fire/room/room46.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$【$HIR$红莲 $HIM$西门$HIC$哨塔$HIY$】$NOR$" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/mogi/dragon/obj/sunblade",
		"file9"    : "/open/mogi/castle/obj/fire_book",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/gsword/obj/dragon-sword",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/ping/obj/chilin_legging",
		"file7"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire_book",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/main/obj/et_sword",
		"amount8"  : 1,
		"file1"    : "/daemon/class/blademan/obj/iceblade",
		"file4"    : "/open/gsword/obj/spsword-1",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "build", 10377 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
当年的左右护法不告而别，纷纷另起炉灶，但是之前多多少少都还有
派人来向$HIR$爱玫$NOR$教主请安及报告帮中的近况......，可是最近几个月都不见
使者来访，教主深怕$HIR$事$HIG$过$HIY$境$BLU$迁$NOR$，或者是当年的左右使已遭人陷害，因此一
方面派人前去视察并在此设立哨站以防事出突然......。


LONG);
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/red_fire/room/room40.c",
]) );
	setup();

	}
