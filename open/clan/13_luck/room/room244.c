inherit ROOM;
void create() {
	set( "short", "�����׺�¥" );
	set( "owner", "adeyzit" );
	set( "build", 16803 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room245.c",
		"up"        : "/open/clan/13_luck/room/room243",
	]) );
	set( "long", @LONG

    �����׺���Ϊˮ����ȴ��ɽ�����ƣ������½������Ѳ���İ���
����л���ʮ����֧�֣�����Ż��н����׳�󣬴�¥Ϊ����������
��ʮ��ȴû��������İ����ţ�û��������ǰ�Ĺ��ף�Ҳû�н����
ʮ������Ȼ�������������ˣ������Ǹ�л�㡣

LONG);
	setup();
	replace_program(ROOM);
}
