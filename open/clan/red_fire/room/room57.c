inherit ROOM;
void create() {
	set( "short", "轻风的房间" );
	set( "owner", "jenny" );
	set( "object", ([
		"amount1"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/gsword/obj/yu_cloak",
		"file3"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj/yugem",
		"amount2"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10105 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room56",
		"east"      : "/open/clan/red_fire/room/room47",
	]) );
	set( "long", @LONG

这里是小姐的房间，这里总是有一股淡淡的花香，好像是从花园里飘
过来的，轻风不喜欢太过于华丽的摆饰，所以在她的房间里只有一些
日常必备的物品外，几乎没有多余的东西了，难怪在帮里面，大家都
看轻风真是一位优雅的小姐。


LONG);
	setup();
	replace_program(ROOM);
}
