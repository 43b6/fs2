inherit ROOM;
void create() {
	set( "short", "�ʳǴ��" );
	set( "object", ([
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10231 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room6.c",
		"north"     : "/open/clan/13_luck/room/room11",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��������Ȫ��һ����ֱ�Ĵ������������ǰ����ͨ��ʮ���������
--- �ʳ�֮Ψһͨ������˵�з�����ʳ���, �����������֮�ˣ�ֻ��
�ʳ�������ʮ������֮���֣���������������Ѫ������ɱ�֣�һ������
�ʳ�, ֻ���޾���ɱ¾������...

LONG);
	setup();
	replace_program(ROOM);
}
