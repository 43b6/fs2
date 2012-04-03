inherit ROOM;
void create() {
	set( "short", "$HIB$nevermind$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file9"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file10"   : "/open/mon/obj/ghost-legging",
		"file3"    : "/daemon/class/fighter/armband",
		"amount6"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
	]) );
	set( "owner", "nirvana" );
	set( "build", 10121 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room50.c",
		"south"     : "/open/clan/hell/room/room51.c",
		"east"      : "/open/clan/hell/room/room34",
		"west"      : "/open/clan/hell/room/room54.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��˵kalin�����־�...���е�˵��..
��kalin�������ǡ�...������һ����ƽ�...
�����ľ�ƣʱ....megadeth��פ������СС����...
kalin֮������rock 'N roll never die......
һֱ����һʱ...kalin������thrash ӵ����punk....
����һ���ܹؼ���ת�۵�...
����һ���heavy... thrash... kalin��rock�ܴ�ͳ...
���Ӵ���punk��..,kalin�����ҵ�����С��..��ϲ����..
��˵rock 'N roll���ϵۣ���punk����������...
LONG);
	setup();
	replace_program(ROOM);
}
