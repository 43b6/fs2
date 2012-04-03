inherit ROOM;
void create() {
	set( "short", "$HIB$��$HIC$��$CYN$��$NOR$" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file2"    : "/open/wind-rain/obj/bird-blade",
		"amount9"  : 1,
		"file3"    : "/open/gsword/obj/dragon-sword",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount7"  : 1,
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10084 );
	set( "owner", "zaa" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG
    ������$HIR$��$NOR$�����ɵ�$HIC$ɽ��$NOR$,���ۿ�ȥΨ��$RED$�����Ľ�$NOR$����
�˵�,�·��Ǹ�$MAG$��֮����$NOR$,���������������������$CYN$����$NOR$,����
������עĿ���ǹ����з��õ�һ��$HIC$����$NOR$,��Ϊ-$HBCYN$��������$NOR$����
���˵�$MAG$����$NOR$,���˲���עĿֻ�ÿ����ȥ����$HIR$��������!$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
