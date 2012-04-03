inherit ROOM;
void create() {
	set( "short", "�鷿" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/gblade/obj/book",
		"amount8"  : 1,
		"file5"    : "/open/gblade/obj/blade-book",
		"file3"    : "/open/gsword/obj/sword_book",
		"file1"    : "/open/mogi/castle/obj/fire_book",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/snow/obj/book",
		"file9"    : "/open/marksman/obj/book",
		"file8"    : "/daemon/class/fighter/armband",
		"file7"    : "/open/center/obj/gamble_book",
		"file2"    : "/open/dancer/obj/magicbook",
		"amount10" : 1,
		"amount1"  : 1,
		"file10"   : "/open/ping/obj/linpo_book",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "fighter" );
	set( "build", 10422 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room276",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��������ɱ�����鷿�ݲ�����Ȼ���࣬��Ҳ��Ϊ�ɹۣ��鷿������
����һ���飬��ϸһ�����������ǻ���ȭ����������ɱ��һ���ѵý���
�����Σ������鶼���������£�ǽ����һ������(couplet)������ɱ����
����ġ�

LONG);
	setup();
	replace_program(ROOM);
}
