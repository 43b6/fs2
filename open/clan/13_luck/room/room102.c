inherit ROOM;
void create() {
	set( "short", "���¥��¥" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room155.c",
		"north"     : "/open/clan/13_luck/room/room156.c",
		"east"      : "/open/clan/13_luck/room/room161.c",
		"down"      : "/open/clan/13_luck/room/room98.c",
		"west"      : "/open/clan/13_luck/room/room353",
		"up"        : "/open/clan/13_luck/room/room101.c",
	]) );
	set( "long", @LONG

    �ڵ�С�������죬�����ŵƻ�������¥���������������˷��¥
��¥��ͨ����������᷿��ȥ���Ӵ���������ȥ��������һ��ɭ�֣�
��ϧ��һƬ����¤�գ�������ȫò����ɫ�����䰵��ֻ������ķ���
��Ҳ��Ҫ�ɻس�Ѩȥ��Ϣ�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
