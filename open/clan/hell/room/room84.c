inherit ROOM;
void create() {
	set( "short", "$HIY$��������$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/golden-ball",
		"amount2"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/golden-ball",
		"file2"    : "/open/magic-manor/obj/golden-ball",
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/golden-ball",
		"file3"    : "/open/magic-manor/obj/golden-ball",
	]) );
	set( "build", 10836 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������������ɢ
�����������������Կ�������֮�е�ľ��֮�������Լ��پ����˺���
����������֮�˺��������������Ҫ����֮�󣬲ŻῪ�������ã���
��δ������������������κ����õġ�
�������ܵظ�����콫���ڴ���ǰ,�ǵô�һ�Ű�!!

LONG);
	setup();
	replace_program(ROOM);
}
