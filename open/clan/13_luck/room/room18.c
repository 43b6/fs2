inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/ping/obj/iceger",
		"amount2"  : 1,
		"amount4"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10156 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room19",
		"south"     : "/open/clan/13_luck/room/room10.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����һ�����������쵽�˾�ͷ����Ϊ�ῴ������ã����Ǻ���û
�п����κζ�����û��ÿ���ǰ�������п��Ŀյأ��յ�����������
����໷��֪����ʲô�����������Ͽ��ٵ�ǰȥ��ֻ�����໷һֱ����
�����ƺ���������ͷ��

LONG);
	setup();
	replace_program(ROOM);
}
