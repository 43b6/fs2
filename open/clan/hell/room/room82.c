inherit ROOM;
void create() {
	set( "short", "$HIR$��������$NOR$" );
	set( "object", ([
		"file5"    : "/open/gsword/obj1/sball",
		"file1"    : "/open/magic-manor/obj/fire-ball",
		"amount1"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/fire-ball",
		"amount5"  : 1,
		"file2"    : "/open/magic-manor/obj/fire-ball",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"file6"    : "/open/magic-manor/obj/fire-ball",
		"amount4"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10111 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������������ɢ
�����������������Կ�������֮�еĽ���֮�������Լ��پ����˺���
����������֮�˺��������������Ҫ����֮�󣬲ŻῪ�������ã���
��δ������������������κ����õġ�
�������ܵظ�����콫���ڴ���ǰ,�ǵô�һ�Ű�!!

LONG);
	setup();
	replace_program(ROOM);
}
