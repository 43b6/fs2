inherit ROOM;
void create() {
	set( "short", "���¥��¥" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room100.c",
		"east"      : "/open/clan/13_luck/room/room341.c",
		"north"     : "/open/clan/13_luck/room/room349",
		"south"     : "/open/clan/13_luck/room/room347.c",
		"west"      : "/open/clan/13_luck/room/room346.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

�����ڵ�С�������죬�����ŵƻ�������¥���������������˷��¥
��¥��ͨ����������᷿��ȥ��ҹ���������紵���������泩��
�㿿�ڻ����Ͼ���������������ҹ������ʱ��ȴһ�з��գ���������
����ҹ�������˼�һ�����¡�


LONG);
	setup();
	replace_program(ROOM);
}
