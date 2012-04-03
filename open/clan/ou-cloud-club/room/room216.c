inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIG$��$HIY$��ʥ��$NOR$" );
	set( "object", ([
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"file8"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/ping/obj/chilin_legging",
		"file10"   : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/daemon/class/fighter/figring",
		"amount4"  : 1,
		"file9"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 14669 );
	set( "light_up", 1 );
	set( "owner", "kingsir" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room214",
	]) );
	set( "long", @LONG
����$HIC$��$HIG$��$HIY$��ʥ$NOR$��������һ�ɱ��˵�$HIC$����$NOR$ֻ��$HIY$��ʥ
$NOR$�����ǰ�$HIR$��$HIC$��$HIB$��$HIM$��$HIC$��$HIR$��$HIY$����$HIC$��$NOR$��Ȼ���ָ��ǹ�$HIC$����$NOR$��
Ȼ����$HIB$�󺣿���$NOR$���һֱ�����$HIY$�Ϲ�$HIC$���$NOR$������

LONG);
	setup();
	replace_program(ROOM);
}
