inherit ROOM;
void create() {
	set( "short", "维修零件室" );
	set( "light_up", 1 );
	set( "object", ([
		"amount7"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "intelii" );
	set( "build", 10278 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room97.c",
	]) );
	set( "long", @LONG
   走进此间石室，数道耀眼的光茫闪烁不定，原来此地便是收藏着
   主要武器装备的EQ室，只见武器柜上摆满了许多稀世利器，无
  论是剑、刀、棍、暗器、可谓是十八般武器样样齐全，可见帮主初创
  时亦花费了许多心血在于武器装备的收集
LONG);
	setup();
	replace_program(ROOM);
}
