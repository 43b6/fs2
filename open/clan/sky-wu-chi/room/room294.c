inherit ROOM;
void create() {
	set( "short", "主卧房" );
	set( "object", ([
		"file5"    : "/open/capital/room/king/obj/dagger1",
		"amount5"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file8"    : "/open/ping/questsfan/obj/dagger1",
		"amount10" : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/ping/questsfan/obj/dagger1",
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/capital/room/king/obj/dagger1",
		"amount2"  : 1,
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file4"    : "/open/capital/room/king/obj/dagger1",
		"file1"    : "/open/ping/questsfan/obj/dagger1",
		"amount1"  : 1,
		"file10"   : "/open/capital/room/king/obj/dagger1",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11886 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room298",
	]) );
	set( "long", @LONG
当你在门外鼓起十二万分的勇气准备要敲门的时候，突
然从房间里面传来一声：「门没锁，请进吧”，这时候你心里
就决定这次就豁出去了，而当你推开门的时候，映入你眼帘的
是明亮的环境以及简单的装潢，而这间房子的主人就坐在你的
面前。当你战战兢兢坐下来的时候，没想到主人却出乎意料的
十分欢迎你的到来，而接下来的时间，你与主人聊了许多的话
题，尤其是在武学方面更是令你受益不少，而在过的一段很长
的时间，你带着满意的心情告别主人离开了血痕居。
LONG);
	setup();
	replace_program(ROOM);
}
