inherit ROOM;
void create() {
	set( "short", "�������æ�" );
	set( "object", ([
		"file10"   : "/open/port/obj/wolf_ring",
		"amount4"  : 10,
		"amount6"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/ping/obj/poison_pill",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"amount9"  : 3,
		"file4"    : "/open/doctor/pill/f_pill",
		"amount5"  : 1,
		"amount10" : 1,
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file6"    : "/open/ping/obj/gold_hand",
		"file3"    : "/open/prayer/obj/kylin-belt",
		"file7"    : "/open/ping/obj/chilin_legging",
		"file5"    : "/open/prayer/obj/boris-boots",
		"amount3"  : 1,
		"file2"    : "/open/main/obj/shiblade",
	]) );
	set( "owner", "mad" );
	set( "build", 10570 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room54.c",
		"enter"     : "/open/clan/13_luck/room/room62",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �߽��˵���Լ��һ��������ɱ�������Ŋ������ܵĿ������纮��
��˪����͸���������������쬵Ĵ����������������ż�������
��ǰһλ����֮���������߲���ʯ֮�������Ŵ�ؾ�����͸¶��һ��
����ĸо��������˴����������֮�أ����ǳ����뿪Ϊ�

LONG);
	setup();
	replace_program(ROOM);
}
