inherit ROOM;
void create() {
	set( "short", "����ˮ��" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
	]) );
	set( "build", 10954 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room3.c",
		"west"      : "/open/clan/13_luck/room/room27",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����������������ķ��ֵ���������ǻ�����磬���������ܵķ�
���϶������ҡҷ�ĺ�Ҷ�ӣ�ֻҪ����΢������ˮ�л���Ĵ����΢
��д�����������գ������Ĵ���ʹ�㾫����ˬ�������������ˮ֮��
ӵ�������Ļ��䣬�в�����еĸо���

LONG);
	setup();
	replace_program(ROOM);
}
