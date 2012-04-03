inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$$HIG$��$NOR$$HIB$��$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"amount8"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/gsword/obj/silver_sword",
		"file9"    : "/obj/gift/bingtang",
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/main/obj/et_sword",
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/obj/gift/lingzhi",
		"amount2"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
	]) );
	set( "build", 10080 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room103.c",
		"home"      : "/open/clan/red_fire/room/hall.c",
		"west"      : "/open/clan/red_fire/room/room90.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

��������·��ǵ���$HIM$��$NOR$$MAG$��$NOR$$HIC$��$NOR$$CYN$Դ$NOR$������磬��ǰ��������
һƬ��͵ľ���������ȴ�����ֵķ��ռ��ǳ���ص�
$HIR$��$NOR$$GRN$��$NOR$��ɢ��������ζϴ����$HIR$����$NOR$�е�$HIB$ɱ��$NOR$֮������������
����ʲô�ط�ʱ��ֻ��ǰ���Ĵ�ʯд����������

                    --$HIR$��$NOR$$HIG$��$NOR$$HIB$��$NOR$--


LONG);
	setup();
	replace_program(ROOM);
}
