inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room208",
		"up"        : "/open/clan/13_luck/room/room206",
	]) );
	set( "long", @LONG

������С���������������֮�У������ʯ�����м�������ͬһ����
�ӣ�һ��С�ľͻ���ʧ���У�������С���ǲ����ˣ����������ҹ���
��С��������ǰ����ǰ��֮ʱ��ͻȻ����Ӱ�����㸩���������ס��
��ȥ·������һ������ڡ���Ȼ�ǿ��֮������

LONG);
	setup();
	replace_program(ROOM);
}
