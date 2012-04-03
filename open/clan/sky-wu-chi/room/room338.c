inherit ROOM;
void create() {
	set( "short", "元素峡谷外" );
	set( "object", ([
		"amount6"  : 1,
		"file3"    : "/open/gsword/obj1/karmband",
		"file4"    : "/open/gsword/npc2/sadsword",
		"amount3"  : 1,
		"file2"    : "/open/gsword/obj1/khelmet",
		"amount5"  : 1,
		"file1"    : "/open/gsword/obj1/bloodsword",
		"amount2"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_cape",
		"file5"    : "/open/gsword/obj1/ring",
		"amount1"  : 1,
		"amount4"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10545 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room337.c",
		"east"      : "/open/clan/sky-wu-chi/room/room339.c",
		"west"      : "/open/clan/sky-wu-chi/room/room340",
		"out"       : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
这里你看到了黑白红蓝绿黄这六种元素,而这六种元素正密集且不消散的
在这一空间里移动,在移动的同时你看到一些不同元素的磨擦产生的一些
微小电子,而你看到这空间的中心有一个神秘的圆球正在吸取这些微小的电子
你不知道这是什么东西,而且这圆球还不时的擩动着,仿佛像是一个活物
LONG);
	setup();
	replace_program(ROOM);
}
