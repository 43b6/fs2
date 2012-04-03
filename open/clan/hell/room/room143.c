inherit ROOM;
void create() {
	set( "short", "装备室" );
	set( "object", ([
		"amount2"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/ping/obj/chilin_legging",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
	]) );
	set( "owner", "zxcv" );
	set( "light_up", 1 );
	set( "build", 12984 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room140",
		"west"      : "/open/clan/hell/room/room13.c",
	]) );
	set( "long", @LONG
这里是嘿嘿呵呵放装备ㄉ地方,处处摆放着嘿嘿呵呵平时练工时所穿ㄉ装备,虽然不是上等货,但却够让嘿嘿呵呵练功ㄌ,里面放着寒冰,妖幻之爪,宝莲靴,天蚕丝带.魔法盾,金之手套.妖行甲,...............等等,如果你绝ㄉ有更适合嘿嘿呵呵川ㄉ装备请指教
LONG);
	setup();
	replace_program(ROOM);
}
