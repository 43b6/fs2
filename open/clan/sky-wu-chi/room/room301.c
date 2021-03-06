inherit ROOM;
void create() {
	set( "short", "刀房" );
	set( "object", ([
		"file9"    : "/open/capital/guard/gring",
		"file7"    : "/open/capital/obj/blade2",
		"file1"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount4"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount9"  : 1,
		"file10"   : "/open/capital/obj/blade2",
		"file8"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/capital/guard/gring",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/gblade/obj/dragon_book",
		"amount8"  : 1,
	]) );
	set( "build", 11431 );
	set( "light_up", 1 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room305",
	]) );
	set( "long", @LONG
当你要推开房门时，一道耀眼的光芒从门缝中直射出来，令
你不禁好奇里面到底有什么东西，进来此房间后，才明白原
来刚才那道光芒是由收藏在这房间里的刀所散发出来的，仔
细一看这房间里的刀每把都是世人梦寐以求的宝刀，虽然心
里很想取走这些宝刀，但这些刀所散发出的霸气却令你望之
怯步。〔放眼江湖千百刀　唯有妖刀能称皇〕
LONG);
	setup();
	replace_program(ROOM);
}
