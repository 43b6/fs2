inherit ROOM;
void create() {
	set( "short", "���߱���" );
	set( "owner", "mei" );
	set( "object", ([
		"amount10" : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/gsword/obj/yuboots",
		"amount5"  : 1,
		"file1"    : "/open/wind-rain/obj/bird-blade",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/ping/obj/ring-2",
		"amount4"  : 149,
		"amount3"  : 1,
		"file10"   : "/open/clan/area/home/hae_bag",
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 1,
		"file2"    : "/open/gsword/obj/dragon-sword",
		"file9"    : "/open/mogi/dragon/obj/key",
		"amount1"  : 1,
		"file6"    : "/daemon/class/fighter/armband",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11997 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room264",
	]) );
	set( "long", @LONG

    �߱�׳�����������ǻ��޲Ŷԣ�����ûsuper pill���ˣ�����һ��
�����ɾ���Ҷ�Զ��������ѣ���һ���书���Զ�����ǿ��������޹�
һ�����Ǹ��У�����Ľ�amulet���˺����м�֮�����������ǰ�������
������whip��Ҫ���Լ�ȥ�򣬲������������鷳��

LONG);
	setup();
	replace_program(ROOM);
}
