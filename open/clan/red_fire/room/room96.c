inherit ROOM;
void create() {
	set( "short", "$HIC$��ϼ$HIG$��$HIW$����$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/gsword/obj/yuskirt",
		"file6"    : "/open/dancer/obj/maple_ribbon",
		"amount2"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/ywhand",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/love/obj/boots",
		"file8"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "waydancer" );
	set( "build", 10046 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room84",
		"north"     : "/open/clan/red_fire/room/room98.c",
		"south"     : "/open/clan/red_fire/room/room97.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

����$HIC$fs$NOR$��$HIR$������$HIC$����ϼ$NOR$��$HIW$����$NOR$��˵���ⷿ������й��µ�
�����֪tell�Ұ�
��һ���žͿ�����һ������������������ʫ
$HIM$��ȥ¥�ս�����
$HIC$Ƽˮ��������
$HIY$��һ����ؾ�
$HIR$�һ������һ���
$NOR$�����㲻��̾����һ��ʫѾ


LONG);
	setup();
	replace_program(ROOM);
}
