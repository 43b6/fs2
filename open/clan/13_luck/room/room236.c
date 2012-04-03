inherit ROOM;
void create() {
	set( "short", "��ڣ" );
	set( "object", ([
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount10" : 1,
		"amount3"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file10"   : "/open/mogi/village/obj/mogi_ring",
		"amount4"  : 1,
	]) );
	set( "owner", "konan" );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room267",
		"east"      : "/open/clan/13_luck/room/room100",
	]) );
	set( "build", 10186 );
	set( "light_up", 1 );
	set( "long", @LONG
������������������չ�λ֮����һ���׷����������������ʯ��֮
�ϡ��ڸ������У������ʿ����֮��Ϊ�����裬ʹ����������Ȼ��ͬ��ֻ
�����봦����һ��â���󣬡�[0;1;31m��[1m][1m��[1my[1m��[1mC[0m��[0;1;36m��[1m��[0m������ӡ���У�ֻ���佣������
����������죬��״�����������������ռ���ֻ����������𣬷����ķ�
���ػ�����ӡ�š�[0;1;36m��[1m��[0m������������ʹһֱ�ɶ�ɽ���������ز�����������
�ܼ����˽��������¡�

LONG);
	setup();
	replace_program(ROOM);
}
