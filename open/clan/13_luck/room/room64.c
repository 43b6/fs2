inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "long" );
	set( "object", ([
		"file4"    : "/open/doctor/obj/needle9",
		"file8"    : "/daemon/class/fighter/armband",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room62",
	]) );
	set( "light_up", 1 );
	set( "build", 10078 );
	set( "long", @LONG

    ������һ���������ȫ��ͬ�ĵط���û���κεľ��û���κε�
��ɫֻ��һƬ���׵�����,���˷�����˼,����������Լ���ĵ�һ������
�ȶ��������У���������ʮ��ǰ߳߸���Ƶ�һλ���ˣ�������Ϊ�λ���
�����Ҳֻ�е����Լ�ȥ�����ˣ�

LONG);
	setup();
	replace_program(ROOM);
}
