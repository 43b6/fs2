inherit ROOM;
void create() {
	set( "short", "天蚕丝带室" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/gsword/obj/yuskirt",
		"amount5"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount4"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/wu/npc/obj/armband",
	]) );
	set( "owner", "vickey" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room281",
		"south"     : "/open/clan/13_luck/room/room297.c",
	]) );
	set( "build", 10065 );
	set( "light_up", 1 );
	set( "long", @LONG

    传说中的门派，变态舞者手中的防具，一身法术无人能敌，尤其是
玄冰护体，比移花接木，借力使力还要厉害，只要两三下，就可以收一
收，好去阴间报到了，所以此物品不是随便就可以打到的，是经过大家
的努力而成功打来的。

LONG);
	setup();
	replace_program(ROOM);
}
