inherit ROOM;
void create() {
	set( "short", "��ɽ·��" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room78.c",
		"north"     : "/open/clan/13_luck/room/room252",
	]) );
	set( "long", @LONG
�Ӹո����ֵĽֵ����������˹������������þ�����ˬ��̧ͷһ����ֻ
����һ����ΰ��ɽ�����������ǰ������������ؿ��������������ոսֵ�
�����ָ�Ҳ�ƺ���ʧ�ˣ�ȡ����֮��ȴ��һ��ƽ�ľ����ĸо����·��ס��
������Դһ�㣬��ʹ���������ĵ�·�����ǵ����ǽ����ɢ������ɽ�ȵȵ�
�˶��������Լ�������Ҳ���а����ġ�
LONG);
	setup();
	replace_program(ROOM);
}
