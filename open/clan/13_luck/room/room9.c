inherit ROOM;
void create() {
	set( "short", "ʮ��Ǯׯ" );
	set( "build", 10676 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/hall.c",
		"up"        : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "long", @LONG

    �����ƣ�Ǯ�������ܵģ�����ûǮȴ�������ܡ��ֽ��ʮ����
�����ڲݴ���ʱ����Ҫ�ܶ��������������ϣ����Ϊʮ����һԱ��
����Ǯ�ĳ�Ǯ�������ĳ�������ʮ��������һ�εĻ�ҫ�ڿ���ռ䣬
����Ŀ�꣺����
������������������������Ϊ�����������ɡ�����

LONG);
	setup();
	replace_program(ROOM);
}
