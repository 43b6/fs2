inherit ROOM;
void create() {
	set( "short", "������С���� " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room258",
	]) );
	set( "long", @LONG
�߽�����С��������˾�ס����ߵ���λ��ʿ��û���뵽ס�������
����λ��ʿ����Ȼ����ô�����ᣬ��Ҳ�����������λ�����Կ��ƽ�������
�Ķ���ԹԹ�����Ե���������Ƭ���˵��һ��������������λ��ʿ������
��һ�Է��ޣ����˸о������������
��ʿ �޷�(Sue fo)
��ʿ ��ܿ(Le yu)
LONG);
	setup();
	replace_program(ROOM);
}
