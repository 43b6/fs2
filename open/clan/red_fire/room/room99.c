inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIM$��$HIY$��$HIW$��$NOR$" );
	set( "object", ([
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/main/obj/et_sword",
		"amount3"  : 1,
		"file4"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/daemon/class/fighter/figring",
		"file3"    : "/open/gsword/obj/may_ring",
		"amount2"  : 1,
	]) );
	set( "owner", "welo" );
	set( "build", 10101 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room68",
	]) );
	set( "long", @LONG

һ������ֻ�������ӵ�$HIY$����$HIR$��$HIG$��$HIC$��$HIY$��$NOR$�ضѷ��ڸ�������
����Щ����$HIW$��ʿ$HIC$����$NOR$���������Ѱ�Ҷ������ղ�Ʒ$HIC$����$NOR$
�����Ϊæ�Ź�������û��ʱ��ú�������Щ$HIM$�ղ�Ʒ$NOR$��
����һ�пգ�һ�������Щ$HIY$����$NOR$���ű���ķźã�����
��Ҳιۡ�


LONG);
	setup();
	replace_program(ROOM);
}
