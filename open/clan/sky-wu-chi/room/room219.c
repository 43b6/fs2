inherit ROOM;
void create() {
	set( "short", "迷之回廊" );
	set( "owner", "clodsnow" );
	set( "object", ([
		"file10"   : "/obj/gift/bingtang",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"file8"    : "/open/dancer/obj/yuaboots",
		"amount10" : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file9"    : "/open/killer/headkill/obj/bluekill",
		"file5"    : "/obj/gift/hobowdan",
	]) );
	set( "build", 10055 );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room220.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
你走进了一条黑暗的长廊，在这里，时间，空间都不再存在，
无尽的虚空包围着你，生命在这里仿佛是多余的东西，你只
能在前一个人所留下的尸体上得到一点余温，继续寻找传闻
中绝世杀手的隐居处，突然，一道幻影从你背后出现，杀气，
前所为有的杀气，一把利剑插入你的体内，刹那间你的灵魂
杀气，一把利剑插入你的体内，刹那间你的灵魂
LONG);
	setup();
	replace_program(ROOM);
}
