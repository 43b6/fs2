inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file7"    : "/open/ping/obj/chilin_legging",
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/ping/obj/iceger",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
	]) );
	set( "build", 10119 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room10.c",
		"west"      : "/open/clan/13_luck/room/room12",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����׻��õ�·�Ͽ��������Ļ���ֲ��·�ԵĻ�԰���԰���м�
ɽ��ˮ��һ���Ѿ���˼�����õĵط���һ��ֻΪ��ֻΪ������������
�������������������������ţ����˲���������Զ���������������ɼ�
���׻��á��쵽�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
