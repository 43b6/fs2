inherit ROOM;
void create() {
	set( "short", "$HIC$��ϼ$NOR$��$HIY$eq$HIW$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file2"    : "/open/common/obj/pill2",
		"file4"    : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 40,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
	]) );
	set( "owner", "waydancer" );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room96",
	]) );
	set( "long", @LONG

һ�����㿴���ˣ�����һ���$HIY$eq�ķ���$NOR$
�����eq������ƴ��ƴ��������
���Լ���$HIY$���$NOR$
��������չ�ֳ��ҵ�$HIR$Ѫ��
$NOR$���������׬eq�ı�����!!!!
�����һ��ǻ�Ŭ����ȥ����õ�eq
׳��$HIR$������$NOR$......


LONG);
	setup();
	replace_program(ROOM);
}
