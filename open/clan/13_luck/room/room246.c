inherit ROOM;
void create() {
	set( "short", "��Ұ���¥" );
	set( "owner", "adeyzit" );
	set( "build", 10269 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room180",
		"up"        : "/open/clan/13_luck/room/room245",
	]) );
	set( "long", @LONG

    [0;1;5;33m��[1;5mQ[1;5m��[1;5mT[1;5m��[1;5mN[1;5m��[1;5m��[0m�������񣬰����������ϣ�Ҳ������λǰ�˵�Ŭ����ס
�����ȹ̣����죬���ģ��ι��ˣ���ڷ��ԣ��ɰ�С��ͷ���ˣ�Ϊ��
�������ף�Ϊ�˸�л��Щǰ�˵�Ŭ�����ͰѴ�¥����Ϊ��Ұ���¥��
ϣ�������ܸ�����ѧϰ���й�֮���޲�����

LONG);
	setup();
	replace_program(ROOM);
}
