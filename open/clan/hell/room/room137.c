inherit ROOM;
void create() {
	set( "short", "装备室" );
	set( "owner", "zxcv" );
	set( "light_up", 1 );
	set( "build", 11442 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room140",
	]) );
	set( "long", @LONG
这里是嘿嘿呵呵放装备ㄉ地方,处处摆放着嘿嘿呵呵平时练工时所穿ㄉ装备,虽然不是上等货,但却够让嘿嘿呵呵练功ㄌ,里面放着寒冰,妖幻之爪,宝莲靴,天蚕丝带.魔法盾,金之手套.妖行甲,...............等等,如果你绝ㄉ有更适合嘿嘿呵呵川ㄉ装备请指教
LONG);
	setup();
	replace_program(ROOM);
}
