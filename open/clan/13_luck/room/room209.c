inherit ROOM;
void create() {
	set( "short", "��������Ϣ��" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room210",
		"north"     : "/open/clan/13_luck/room/room208",
	]) );
	set( "long", @LONG

����һ·���������ѣ������ҵ���һСС�ıܷ�ۡ��������ܵش���
�ܣ�Ӧ�ò��ݻᱻ��Ⱥ���������֮����������԰��ĵ�������Ϣһ
���ˣ�������ǰ;���գ�����ô������ú���Ϣһ�£�������ܼ���
ð�յ��ọ́����Ȳ�����һ������

LONG);
	setup();
	replace_program(ROOM);
}
