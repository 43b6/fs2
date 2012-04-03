inherit ROOM;
void create() {
	set( "short", "$HIR$地道$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/magic-sign",
	]) );
	set( "build", 1137 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room76.c",
		"west"      : "/open/clan/hell/room/room78",
		"east"      : "/open/clan/hell/room/room77",
	]) );
	set( "long", @LONG
这里是阴曹地府里的神秘地方，通常除了高阶层人
员能来到这里外，其他人是不准许来到这的，看似阴暗
的地道，似乎在一旁也还有着房间。如今想到自已已来
到这，就不禁打了些冷颤，在一旁的房间里也不时的传
出所多声音，似忽是在那哀嚎着。

LONG);
	setup();
	replace_program(ROOM);
}

