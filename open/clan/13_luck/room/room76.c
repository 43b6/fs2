inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room340",
		"down"      : "/open/clan/13_luck/room/room71.c",
		"east"      : "/open/clan/13_luck/room/room77.c",
		"up"        : "/open/clan/13_luck/room/room83.c",
		"north"     : "/open/clan/13_luck/room/room79.c",
		"south"     : "/open/clan/13_luck/room/room80.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף������ϱ߿�ȥ
����������Ҳ�ǵƻ�ͨ�����о��ĳ����Ǳ��Ƿǳ����ֵĵط���ѯ��
��һ�µ�С����ȷ���Ƕ���ʮ�����������ֵĵط����տ�����

LONG);
	setup();
	replace_program(ROOM);
}
