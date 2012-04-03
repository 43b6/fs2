inherit ROOM;
void create() {
	set( "short", "���˾�" );
	set( "owner", "kris" );
	set( "object", ([
		"amount10" : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/doctor/obj/needle9",
		"amount5"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file1"    : "/open/poison/obj/bleed_whip",
		"file6"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file8"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/scholar/obj/icefan",
		"amount6"  : 1,
	]) );
	set( "build", 10076 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room92",
		"east"      : "/open/clan/13_luck/room/room188",
	]) );
	set( "long", @LONG
�������������������һ��������Ż����Ϣ��������Ȼ���õĺ�
һ��Ӽ�ûʲô������������ԼԼ�����˾������ܵİ���һ����
�����£�������һ̽�˴������˾���Ϊ���ˡ�  �����߿��Իص�
�̲�԰��ǰͥ������������ͨ����ҩ����
LONG);
	setup();
	replace_program(ROOM);
}
