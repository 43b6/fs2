inherit ROOM;
void create() {
	set( "short", "�����ֵ�" );
	set( "object", ([
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10266 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room153",
		"west"      : "/open/clan/13_luck/room/room2",
	]) );
	set( "long", @LONG

����������ľ�����������ǰ���죬�γ�һ��Ȼ���ֵ�������һƬ��
�ⰻȻ��һ��΢�紵����������Ҷ���ҡҷ������һƬ�����Ƶġ�΢
��Ю�����������Ϣ�����촵�����˾���������ˬ������͸��֦Ҷ��
�µ���ƣ�����ʤ�ա�

LONG);
	setup();
	replace_program(ROOM);
}
