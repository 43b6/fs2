inherit ROOM;
void create() {
	set( "short", "�ʳǴ��" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/daemon/class/blademan/obj/gold-blade",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10001 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/hall.c",
		"east"      : "/open/clan/13_luck/room/room197.c",
		"north"     : "/open/clan/13_luck/room/room7.c",
		"west"      : "/open/clan/13_luck/room/room193",
	]) );
	set( "long", @LONG

    ������ʮ������Ĵ�Ӫ--�ʳǣ�������ȥ������¥��һ��ׯ
�ϵ����������������ʳǣ�ʹ����֮ȴ��������ʯ���Ͽ��������ڷ���
֮������ʮ�����黨������������������ɣ��ǰ���֮�ˣ�һ��̤��
�ʳ�֮�����ѻ�ͷ, ֻ�����ɥ������֮�³�...

LONG);
	setup();
	replace_program(ROOM);
}
