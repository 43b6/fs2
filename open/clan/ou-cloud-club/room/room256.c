inherit ROOM;
void create() {
	set( "short", "$HIR$С��ñ$NOR$" );
	set( "object", ([
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/open/port/obj/wolf_ring",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount9"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
		"file7"    : "/obj/gift/lingzhi",
		"file4"    : "/open/ping/obj/ring-2",
		"file3"    : "/open/ping/obj/cloud",
		"file8"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 14641 );
	set( "light_up", 1 );
	set( "owner", "ripken" );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room241",
	]) );
	set( "long", @LONG
$HIY$��$HIC$��$NOR$ɽׯ�ڴ�������ħ���ػ����޵��ۼף�����ʥ
���֮$HIY$��$HIW$��������$HIY$��$NOR$��$HIR$������ħ$NOR$��$HIC$����$NOR$��ƾһ��֮����
��ħ������$HIY$�ƽ����$NOR$��Ӽ����������õ����ۼף�����
��$HIY$ħ����$NOR$����ͨ��ħ��ĳ��֮Ч��

LONG);
	setup();
	replace_program(ROOM);
}
