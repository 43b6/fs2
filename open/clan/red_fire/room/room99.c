inherit ROOM;
void create() {
	set( "short", "$HIC$威洛$NOR$的$HIM$藏$HIY$剑$HIW$库$NOR$" );
	set( "object", ([
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/main/obj/et_sword",
		"amount3"  : 1,
		"file4"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/daemon/class/fighter/figring",
		"file3"    : "/open/gsword/obj/may_ring",
		"amount2"  : 1,
	]) );
	set( "owner", "welo" );
	set( "build", 10101 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room68",
	]) );
	set( "long", @LONG

一进房门只见满屋子的$HIY$宝剑$HIR$七$HIG$横$HIC$八$HIY$竖$NOR$地堆放在各个角落
，这些都是$HIW$剑士$HIC$威洛$NOR$由世界各地寻找而来的收藏品$HIC$威洛$NOR$
最近因为忙着工作，还没有时间好好整理这些$HIM$收藏品$NOR$，
等他一有空，一定会把这些$HIY$宝剑$NOR$分门别类的放好，方便
大家参观。


LONG);
	setup();
	replace_program(ROOM);
}
