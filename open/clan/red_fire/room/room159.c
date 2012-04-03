inherit ROOM;
void create() {
	set( "short", "$MAG$��$NOR$$HIY$��$NOR$$HIG$��$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file6"    : "/open/port/obj/wolf_ring",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
	]) );
	set( "build", 10021 );
	set( "owner", "lina" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room77",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

����һ������ˮ���ϵ�С��$HIY$����$NOR$�󳡣���Զ������һ����ˮ��ҡҷ
��$HIC$С��$NOR$����Ȼ����Ŀ�����࣬�������Ȼ�����������������ƺ�
һ��Ҳ����Ϊ�⣬�ƣ��������ϵ�Ц���Ƕ�ô���֡��ڿ��Ա���
һ��СС��$YEL$��ʾ��$NOR$��Sign��������д��һЩ��ϡ�ɱ�����֡�


LONG);
	setup();
	replace_program(ROOM);
}
