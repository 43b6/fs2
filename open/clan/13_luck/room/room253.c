inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room251",
	]) );
	set( "long", @LONG
��������վ�ھ������У���Ϊ���������ι������������һ�ϸߵ͵�
�ط������Լ�ʹ�ھ����б��Է�ɱ��Ҳû���κι�ϵ���������м����½�
���������ٵ�״������������ǽ�����������ű�������(board)��
������pk...���˲����ҵ���...���ϴ����蹹
LONG);
	setup();
	replace_program(ROOM);
}
