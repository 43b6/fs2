inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room270",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/gsword/obj/dragon-sword",
		"amount4"  : 1,
		"amount7"  : 23,
		"amount8"  : 3,
		"file8"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"file6"    : "/open/mogi/village/obj/mogi_ring",
		"file3"    : "/open/ping/obj/gold_hand",
		"file4"    : "/open/doctor/obj/needle9",
		"file7"    : "/open/ping/obj/poison_pill",
	]) );
	set( "build", 10272 );
	set( "light_up", 1 );
	set( "long", @LONG

    ����������ǧ���ѩ���ɣ����Զ������ܻ�����������Ϊ����ɽկ
��կ���������У���ò��Ϊ���ˣ����������������Ҳ�и�ǿ���书
���ö������������Ů���ˣ��������������У��������Ŷμ��������
���˾��������˷���ʤ����

LONG);
	setup();
	replace_program(ROOM);
}
