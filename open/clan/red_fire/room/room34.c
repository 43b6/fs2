inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIY$��$NOR$" );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount6"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file2"    : "/open/ping/questsfan/obj/diamond_hands",
		"file3"    : "/open/ping/questsfan/obj/diamond_armor",
		"file4"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_boots",
		"file1"    : "/open/ping/questsfan/obj/diamond_belt",
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/ping/obj/cloud_fan",
		"file7"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount7"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10556 );
	set( "owner", "laiyia" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room75",
	]) );
	set( "long", @LONG

����$HIC$����$NOR$��$HIR$��$NOR$��$HIY$С��$NOR$��$HIC$����$NOR$����һ����������$HIW$����$NOR$��$HIM$����$NOR$��
���������Ȼ����������Ҳû��$HIW$����$NOR$������ܣ�ȴ��������
һ��$HIR$��$HIG$��$HIY$��$HIC$ܰ$NOR$�ĸо���ֻҪ��������ͻ�����˼��$HIC$��ů$NOR$
���ֿɵá�


LONG);
	setup();
	replace_program(ROOM);
}
