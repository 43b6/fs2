inherit ROOM;
void create() {
	set( "short", "һ¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room225",
		"out"       : "/open/clan/13_luck/room/room227.c",
	]) );
	set( "long", @LONG

������С���������������֮�У������ʯ�����м�������ͬһ����
�ӣ�һ��С�ľͻ���ʧ���У�������С���ǲ����ˣ����������ҹ���
��С��������ǰ����ǰ��֮ʱ��ͻȻ����Ӱ�����㸩���������ס��
��ȥ·������һ������ڡ���Ȼ����������

LONG);
	setup();
	replace_program(ROOM);
}
