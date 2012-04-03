inherit ROOM;
void create() {
	set( "short", "�� ͤ" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file7"    : "/obj/gift/xiandan",
		"amount8"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/daemon/class/fighter/armband",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file4"    : "/obj/gift/xisuidan",
	]) );
	set( "build", 10280 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room182",
		"east"      : "/open/clan/ou-cloud-club/room/room125.c",
	]) );
	set( "long", @LONG
ǰ �� �� �� �� �� �� �� ��

������Ϣ֮�����������൱����ɾ�
�ǳ�����ĸо���Ҳ������������֮��
���յ���ɽ֮�ǣ������ɸ��ܵ���������
��Ȼֻ��Ů�ӣ�������������书��ʵ�ڲ�������
�������Ϸ����ĵ������㣬������������������ɽ��һ��ʦ��
LONG);
	setup();
	replace_program(ROOM);
}
