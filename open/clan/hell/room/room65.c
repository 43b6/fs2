inherit ROOM;
void create() {
	set( "short", "$HIW$��������$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room38",
	]) );
	set( "long", @LONG
test test test test test test test test
test test test test test test test test
test test test test test test test test
test test test test test test test test
test test test test test test test test
LONG);
	setup();
	replace_program(ROOM);
}
