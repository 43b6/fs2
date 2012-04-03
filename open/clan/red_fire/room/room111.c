inherit ROOM;
void create() {
	set( "short", "$HIM$ĵ��$HIC$ͤ$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"file6"    : "/open/tendo/obj/chaosbelt",
		"amount1"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount7"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/killer/obj/k_ring",
		"amount9"  : 1,
	]) );
	set( "owner", "sillyboy" );
	set( "item_desc", ([
		"ĵ��" : @ITEM
���������Ĵ�컨�䣬���㿴��Ŀ��Ͼ����
ITEM,
	]) );
	set( "build", 10049 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room75.c",
	]) );
	set( "long", @LONG
������$HIR$����$NOR$����һ��������$HIY$��$NOR$���֡�$HIY$��$HIM$ĵ��$NOR$�����Ѿӣ����Ž���
�����������Ũ��$HIC$ܰ��$NOR$��������ȥ�����������ޣ��������治�ѵ�$HIM$ĵ
��$NOR$��������ǰ����ǧ��Ĵ�仨�������ڰ����ȴֻ�����ص�$HIW$����$NOR$��
$YEL$ͭ��$NOR$��������ܵ����˹·����͵ĸ߰������ס�


LONG);
	setup();
	replace_program(ROOM);
}
