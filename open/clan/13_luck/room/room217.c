inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room218.c",
		"up"        : "/open/clan/13_luck/room/room216",
	]) );
	set( "long", @LONG

������С���������������֮�У������ʯ�����м�������ͬһ����
�ӣ�һ��С�ľͻ���ʧ���У�������С���ǲ����ˣ����������ҹ���
��С��������ǰ����ǰ��֮ʱ��ͻȻ����Ӱ�����㸩���������ס��
��ȥ·������һ������ڡ���Ȼ�Ǿ�������

LONG);
	setup();
	replace_program(ROOM);
}
