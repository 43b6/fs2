inherit ROOM;
void create() {
	set( "short", "����ذ����" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file2"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "owner", "kanako" );
	set( "build", 10284 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room266",
	]) );
	set( "long", @LONG

    ɱ�֣������ǿ��µ�ɱ�֣�һ��ħ��ɱ����������ʹ�����䣬�׻�
����������ȸ���͵���ȥ���ڰײ����ˣ��ɼ����������������ף�����
�ǿ�����ɱ�ַ��࣬һ��ɱ������������߹������һ��ҪΣ�ֱ�֮
����Ȼ��һ�������ľ����㡣

LONG);
	setup();
	replace_program(ROOM);
}
