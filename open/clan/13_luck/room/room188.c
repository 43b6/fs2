inherit ROOM;
void create() {
	set( "short", "��ҩ��" );
	set( "owner", "kris" );
	set( "object", ([
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file3"    : "/obj/poison/five_poison",
		"amount2"  : 9937,
		"file1"    : "/obj/poison/rose_poison",
		"amount1"  : 10077,
		"file6"    : "/open/snow/obj/figring",
		"file8"    : "/open/doctor/obj/cloth",
		"amount3"  : 10386,
		"amount4"  : 6163,
		"file4"    : "/obj/poison/faint_poison",
		"file2"    : "/obj/poison/dark_poison",
		"amount8"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10049 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room187",
	]) );
	set( "long", @LONG
����һ����֪����һ����������ҩ�ĵĿⷿ����������Χ��һ��
�������Զ�ļ��ӣ������������������������õ�ҩ���ӣ���
����Զ�ļ��Ӱ����������õ�ҩ���ӣ����˻�����䴢�ؿ⻹��
����ʹ��ά����  �����߿��Իص����˾ӡ�
LONG);
	setup();
	replace_program(ROOM);
}
