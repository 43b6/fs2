inherit ROOM;
void create() {
	set( "short", "Ʈ������" );
	set( "owner", "sznking" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/port/obj/wolf_ring",
		"amount8"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/gsword/obj/dragon-sword",
		"amount6"  : 1,
		"file7"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file4"    : "/open/mogi/dragon/obj/key",
		"amount5"  : 1,
		"file6"    : "/open/tendo/obj/chaosbelt",
		"amount10" : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file10"   : "/open/gsword/obj/yuskirt",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/tendo/obj/shoe",
	]) );
	set( "light_up", 1 );
	set( "build", 10035 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room275",
	]) );
	set( "long", @LONG

    Ʈ���ȣ��μҵ��ϴ�����֮�Ϊ�μ�֮��ʹ�����Ż���֮����
�μ��Ե�Ѩ���������㵽�޲������Լ����������ı��������Ǳ�����
���������Զμҹ�����ͣ����Ǳ�������Ҳ��ң�С�Ķμҵĵ��ˣ���
�����׸����ǽ��

LONG);
	setup();
	replace_program(ROOM);
}
