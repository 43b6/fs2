inherit ROOM;
void create() {
	set( "short", "$HIC$����ˮ��$NOR$" );
	set( "object", ([
		"file2"    : "/open/magic-manor/obj/water-ball",
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/water-ball",
	]) );
	set( "build", 10090 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�ഫ���Ҫ���������������ͱ���ҪЯ���ı������ˮ����ɢ
�����������������Կ�������֮�еĻ���֮�������Լ��پ����˺���
����������֮�˺�������ˮ�����Ҫ����֮�󣬲ŻῪ�������ã���
��δ���������ˮ�������κ����õġ�
�������ܵظ�����콫���ڴ���ǰ,�ǵô�һ�Ű�!!

LONG);
	setup();
	replace_program(ROOM);
}
