inherit ROOM;
void create() {
	set( "short", "$HIG$����ľ��$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/wood-ball",
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/wood-ball",
		"file1"    : "/open/magic-manor/obj/wood-ball",
		"amount3"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/wood-ball",
		"file3"    : "/open/magic-manor/obj/wood-ball",
	]) );
	set( "light_up", 1 );
	set( "build", 11348 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������ľ����ɢ
�����������������Կ�������֮�е�����֮�������Լ��پ����˺���
����������֮�˺�������ľ�����Ҫ����֮�󣬲ŻῪ�������ã���
��δ���������ľ�������κ����õġ�
�������ܵظ�����콫���ڴ���ǰ,�ǵô�һ�Ű�!!

LONG);
	setup();
	replace_program(ROOM);
}
