inherit ROOM;
void create() {
	set( "short", "������̨��" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room253",
		"north"     : "/open/clan/13_luck/room/room78",
	]) );
	set( "long", @LONG
һ���Ľ����γ�����λ������߿�����������������ϵı���
������������ȥ���ƺ����Ըо������ձ����ʢ��������δ��������
���ʣ�����������ڿ�̨�ϵ���ҪȥŬ�����ˡ��뵽��ߣ���������
��Ѫ�����к����ţ������ͣ�����
LONG);
	setup();
	replace_program(ROOM);
}
