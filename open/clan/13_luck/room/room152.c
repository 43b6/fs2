inherit ROOM;
void create() {
	set( "short", "��֮�����" );
	set( "build", 10452 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room157",
		"west"      : "/open/clan/13_luck/room/room153.c",
	]) );
	set( "long", @LONG

����������������֮�ֵ���ڴ��ˣ��Ա߲���һ�龯���ƣ���ͷд��
����֮�֣�����Ũ��ɢ��Խ����ȥ������Խ��Ũ�ܣ�û���ߣ��к�
�ô���������ʧ�����С���������������ͷ��ȥ�������ǰ�ãã��һ
ƬŨ��������һ�У�����������¡�

LONG);
	setup();
	replace_program(ROOM);
}
