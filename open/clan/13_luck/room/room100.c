inherit ROOM;
void create() {
	set( "short", "���¥��¥" );
	set( "build", 18 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room101.c",
		"west"      : "/open/clan/13_luck/room/room236.c",
		"east"      : "/open/clan/13_luck/room/room286.c",
		"up"        : "/open/clan/13_luck/room/room342",
		"north"     : "/open/clan/13_luck/room/room237.c",
		"south"     : "/open/clan/13_luck/room/room265.c",
	]) );
	set( "long", @LONG

�����ڵ�С�������죬�����ŵƻ�������¥���������������˷��¥
��¥��ͨ����������᷿��ȥ��ҹ���������紵���������泩��
�㿿�ڻ����������������Լ�������Ƕ�����ʱ��ȴһ�з��գ���ȴ
һ�еĶ���������������������ҹ����

LONG);
	setup();
	replace_program(ROOM);
}
