inherit ROOM;
void create() {
	set( "short", "$HIY$��֯����$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"file1"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
	]) );
	set( "owner", "bbsboss" );
	set( "light_up", 1 );
	set( "build", 12060 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room188",
		"west"      : "/open/clan/ou-cloud-club/room/room187",
	]) );
	set( "long", @LONG
         $HIR$�Խ�˿֯�ɵ�������ף������ƺ�������ĳ��ħ��$NOR$



$WHT$��Ծ����֮��(dodge)            ����ЧӦ�� 3$NOR$


�ߵ����...���Ѿ�����������������
����Ϊ�����Ӿͽ���...��ͷ���ܶ���..
��������ɽկ�Ķ�կ��Ҳ���ⶾ����...������Ľ�֯����Ҳ����
LONG);
	setup();
	replace_program(ROOM);
}
