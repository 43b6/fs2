inherit ROOM;
void create() {
	set( "short", "��ѩ����" );
	set( "owner", "jtl" );
	set( "object", ([
		"amount2"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/tendo/obj/shoe",
		"amount6"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/marksman/obj/dragon_bow",
		"amount5"  : 1,
		"file7"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount3"  : 1,
		"file2"    : "/open/doctor/obj/needle9",
		"file6"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "build", 11556 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room272",
	]) );
	set( "long", @LONG

    ��ѩ��˿������ҽ��֮ʦ����٢����������������������٢���־�
�ŵ�һ���亹������һ���뷨�����Ǳ�̬�ĺ�����ʽ����ӿ��˵Ľ�
���Ѩ���˷���ʤ����ֻ�ø�����ս�پ��������ִ������鵤��������
����ֵ���࣬�ɱ����Լ���������Ц��

LONG);
	setup();
	replace_program(ROOM);
}
