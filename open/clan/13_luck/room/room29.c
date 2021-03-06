inherit ROOM;
void create() {
	set( "short", "吉祥水道入口" );
	set( "object", ([
		"file2"    : "/daemon/class/blademan/obj/hstone",
		"file9"    : "/daemon/class/blademan/obj/fstone",
		"amount6"  : 1,
		"file5"    : "/daemon/class/blademan/obj/wastone",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/daemon/class/blademan/obj/estone",
		"amount4"  : 8,
		"amount9"  : 1,
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"amount2"  : 1,
		"file4"    : "/open/fire-hole/obj/b-pill",
		"file6"    : "/daemon/class/blademan/obj/gstone",
		"file7"    : "/open/ping/obj/ring-2",
	]) );
	set( "owner", "amdmp" );
	set( "build", 14115 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room28.c",
		"out"       : "/open/clan/13_luck/room/room30",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    当你一来到就觉的这里非常喧嚣，你放眼望去有忙忙碌碌的人们正
在水道边忙碌的装卸货物，这样热闹的景象映入眼帘，让你深深觉得十
三吉祥是个繁荣的地方，如果你想通过水道，你可以问问船家，他们会
很乐意的载你前往的。

LONG);
	setup();
	replace_program(ROOM);
}
