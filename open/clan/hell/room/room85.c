inherit ROOM;
void create() {
	set( "short", "$YEL$��������$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/soil-ball",
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/soil-ball",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/soil-ball",
	]) );
	set( "light_up", 1 );
	set( "build", 11002 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������������ɢ
�����������������Կ�������֮�е�ˮ��֮�������Լ��پ����˺���
����������֮�˺��������������Ҫ����֮�󣬲ŻῪ�������ã���
��δ������������������κ����õġ�
�������ܵظ�����콫���ڴ���ǰ,�ǵô�һ�Ű�!!

LONG);
	setup();
	replace_program(ROOM);
}
