inherit ROOM;
void create() {
	set( "short", "幻纹妖爪房" );
	set( "owner", "fighter" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room271",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file5"    : "/open/doctor/obj/needle9",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"file7"    : "/open/marksman/obj/dragon_bow",
		"amount2"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "build", 10431 );
	set( "light_up", 1 );
	set( "long", @LONG

    此防具，为闻名无不吓破胆的千年树妖舞风扬身上所有的，此妖有
千年之功力，长年在长白山上修练，法术更是无人能敌，与他为敌只会
一肚子大便的状态，尤其是虚弱，所以他的防具不是说有就有的，也要
看有没有人敢去打，为了那一件[0;1;33m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[0m。

LONG);
	setup();
	replace_program(ROOM);
}
