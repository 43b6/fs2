inherit ROOM;
void create() {
	set( "short", "世间木道" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/killer/headkill/obj/f_dag",
		"file6"    : "/open/killer/headkill/obj/w_dag",
		"file4"    : "/open/killer/headkill/obj/bluekill",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount1"  : 1,
		"file9"    : "/open/killer/obj/dagger",
		"file5"    : "/open/killer/headkill/obj/e_dag",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/killer/headkill/obj/i_dag",
		"amount10" : 1,
	]) );
	set( "owner", "pigdevil" );
	set( "build", 10524 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room306.c",
		"south"     : "/open/clan/13_luck/room/room317",
		"east"      : "/open/clan/13_luck/room/room304.c",
		"north"     : "/open/clan/13_luck/room/room274.c",
	]) );
	set( "long", @LONG

    沧桑岁月，世间常变，来到这条十三吉祥的世间五行道，此道为[0;1m□[1m□[0m
[0;1m□[1mD[0m，用来比喻十三吉祥的防御，而此道上面都放着给帮众的防具与武器
，而适用对象为，没时间打防具跟武器的帮众，与新进帮众没能力打防
具与没自己的房间可以借用一下。

LONG);
	setup();
	replace_program(ROOM);
}
