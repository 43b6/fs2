inherit ROOM;
void create() {
	set( "short", "�����ֵ�" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room152",
		"west"      : "/open/clan/13_luck/room/room154",
	]) );
	set( "long", @LONG

����������ǰԶ��ʱ��һ������ɭ�־��ڲ�Զǰ����һ��Ƭ������
�յ�ɭ�֣�����������ĺ����ģ���ǰ��һ̽����������ðȻǰ����
��Σ�յ��£���������Ĵ���̽�����ڵ�֪ԭ��ǰ�����Ƕ������õ�
��֮�֣��н��޳���

LONG);
	setup();
	replace_program(ROOM);
}
