inherit ROOM;
void create() {
	set( "short", "�ʳǴ��" );
	set( "build", 10010 );
	set( "object", ([
		"file9"    : "/open/ping/obj/ring-2",
		"file3"    : "/daemon/class/blademan/obj/mhands",
		"amount2"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/soldier/obj/hit",
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/soldier/obj/snake",
		"file1"    : "/u/b/babe/cloud",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room7",
		"north"     : "/open/clan/13_luck/room/room8",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������ʮ������Ĵ�Ӫ--�ʳǣ�������ȥ������¥��һ��ׯ
�ϵ����������������ʳǣ�ʹ����֮ȴ��������ʯ���Ͽ��������ڷ���
֮������ʮ�����黨������������������ɣ��ǰ���֮�ˣ�һ��̤��
�ʳ�֮�����ѻ�ͷ, ֻ�����ɥ������֮�³�...

LONG);
	setup();
	replace_program(ROOM);
}
