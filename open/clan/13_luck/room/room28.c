inherit ROOM;
void create() {
	set( "short", "吉祥水道" );
	set( "object", ([
		"amount5"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/ping/obj/gold_hand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/ping/obj/ring-2",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
	]) );
	set( "owner", "amdmp" );
	set( "build", 10782 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room29",
		"north"     : "/open/clan/13_luck/room/room27.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    吉祥水道是十三吉祥的最重要交通与运输中心，想到十三吉祥的内
部一定要经过这里，吉祥水道到处都可以看到来往的船只，而船上的人
们都悠哉的享受水上之旅，走在路上有时还可以看到有人悠闲着钓鱼，
真是惬意，在往前走就会走进秋阳流树林。

LONG);
	setup();
	replace_program(ROOM);
}
