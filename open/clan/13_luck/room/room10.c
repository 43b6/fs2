inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10236 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room18",
		"east"      : "/open/clan/13_luck/room/room16.c",
		"out"       : "/open/clan/13_luck/room/room11.c",
		"west"      : "/open/clan/13_luck/room/room13.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    һ��������̤����ɫ�ĵ�̺�ϣ���һ�ַǷ������ƣ��ñ��Լ��Ǿ�
��֮���ܹ����ұ��ˣ������ҵ�ǽ�϶������������������������Լ�
����գ����ܳ��г�ʮ�������۰����µľ��ģ��������Ե��׻��ã���
�����Ե���ȸ�á�

LONG);
	setup();
	replace_program(ROOM);
}
