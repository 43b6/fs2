inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room202",
		"up"        : "/open/clan/13_luck/room/room200.c",
	]) );
	set( "long", @LONG

������С���������������֮�У������ʯ�����м�������ͬһ����
�ӣ�һ��С�ľͻ���ʧ���У�������С���ǲ����ˣ����������ҹ���
��С��������ǰ����ǰ��֮ʱ��ͻȻ����Ӱ�����㸩���������ס��
��ȥ·������һ������ڡ���Ȼ�ǳ�Ѫ��������

LONG);
	setup();
	replace_program(ROOM);
}
