inherit ROOM;
void create() {
	set( "short", "练气室" );
	set( "owner", "konanii" );
	set( "object", ([
		"amount9"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file6"    : "/open/tendo/obj/chaosbelt",
		"file2"    : "/daemon/class/fighter/figring",
	]) );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room267",
	]) );
	set( "long", @LONG

    这里是修练气功的地方，非常的幽雅安静，完全杜绝了外界干扰
扰，修练内功最忌就是受到干扰而走火入魔，四周陈设着各式的水晶
，听说对于人体气流有绝对的帮助，还有排列着一些的辅助防具，着
装后来修练更是事半功倍的效果。


LONG);
	setup();
	replace_program(ROOM);
}
