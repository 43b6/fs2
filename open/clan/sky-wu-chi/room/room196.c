inherit ROOM;
void create() {
	set( "short", "$HIC$$BWHT$阿噜米的装备室$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/ping/obj/gold_hand",
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 33701 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room110",
	]) );
	set( "long", @LONG
这一间是$HIR$阿噜米$NOR$的$HIB$装备室$NOR$之一，里面放了各式各样的武器与
防具。这都是$HIR$阿噜米$NOR$常年在外去与人比武或是出任务时，所
带回来的胜利品，装备都是放在$HIY$柜子$NOR$里，由$HIR$阿噜米$NOR$本人亲自
整理，这些装备经过$HIR$阿噜米$NOR$灌输深厚的内力后，只能适合他
本人使用了，外人想要穿上这些装备是难上加难。
LONG);
	setup();
	replace_program(ROOM);
}
