inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "light_up", 1 );
	set( "exits", ([
		"ball"      : "/open/clan/13_luck/room/room198",
		"down"      : "/open/clan/13_luck/room/room200",
	]) );
	set( "long", @LONG

�������������ؿ������ڵ��˶�¥����˵��������������ͨ�����
����������û��֪����ν�ȥ�ķ�������Ϊ��δ���������Ź�������
�������ŵ��ϲ��������������֪���˵����к���(ball)������һ��
һ���Ĺ�ã��ʮ��ҫ�ۡ�

LONG);
	setup();
	replace_program(ROOM);
}
