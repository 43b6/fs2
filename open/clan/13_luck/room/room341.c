inherit ROOM;
void create() {
	set( "short", "COMAN�ķ���" );
	set( "owner", "coman" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/obj/gift/shenliwan",
		"amount1"  : 215,
		"amount3"  : 1,
		"file2"    : "/obj/gift/unknowdan",
	]) );
	set( "build", 10812 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room342",
	]) );
	set( "long", @LONG

    ����һ������䷽��ʱ����������������ɱ��������΢������
�ܣ������̵��ӣ�ԭ����䷿�������ϲ���ռ����־�������!!��ǰ
���ǽ���ϻ��Ҩ�һ�������� (WCC)�ɻ��񣬴��˾��ǵ���һ���˵�
��fire king�ɵ���֮����Ҳ��COMAN��ʦ������ʦ��


LONG);
	setup();
	replace_program(ROOM);
}
