inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "build", 60 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room148",
		"north"     : "/open/clan/13_luck/room/room61.c",
		"down"      : "/open/clan/13_luck/room/room53",
		"east"      : "/open/clan/13_luck/room/room59.c",
		"south"     : "/open/clan/13_luck/room/room66.c",
		"up"        : "/open/clan/13_luck/room/room71.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף������߿�ȥ��
��������һ����ɫ�����������ʣ����ܺ����ǵ���ͨ�����أ�����
�����Ⱥúõ�˯һ����������ȥһ��������

LONG);
	setup();
	replace_program(ROOM);
}
