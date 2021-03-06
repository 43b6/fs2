inherit ROOM;
void create() {
	set( "short", "$HIW$黑轮卧房 - $HIC$武器室$NOR$" );
	set( "object", ([
		"file9"    : "/open/wind-rain/obj/bird-blade",
		"amount10" : 1,
		"file2"    : "/daemon/class/blademan/obj/gold-blade",
		"file6"    : "/open/ping/obj/iceger",
		"amount4"  : 1,
		"file1"    : "/open/ping/obj/iceger",
		"amount3"  : 1,
		"file10"   : "/open/ping/obj/cloud_fan",
		"amount6"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file4"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"file5"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
	]) );
	set( "item_desc", ([
		"dragon_sword" : @ITEM
此剑乃是藏于黄金城内，传说中拿了便能
使功力增强数倍的神剑，但若是内力不够，则
无法驾驭此剑，反而会被狂气所吞噬，看来也
只有[0;1;31m□[1mC[1m□[1m][1;37m□[1m□[1m□[1m□[0m才够格拿此剑阿

ITEM,
	]) );
	set( "build", 10760 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room48",
		"north"     : "/open/clan/hell/room/room48",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里是剑魔黑轮放置武器的地方，房间里
满是不常见到的武器．其中更有武林七大奇兵
器中的[0;1;31m□[1m□[1m□[1ms[1;37m□[1mM[0m、[0;1;36m□[1m□[1m□[1m][1;35m□[1m□[1m□[1mF[1;37m□[1mC[0m等，而在这房间中
央放置的正是传说中黄金城内所藏的

                [0;1m□[1mp[1m□[1m□[1;32m□[1mC[1m□[1ms[1;37m□[1mC[0m(Dragon_sword)


LONG);
	setup();
	replace_program(ROOM);
}
