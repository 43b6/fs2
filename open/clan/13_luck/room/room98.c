inherit ROOM;
void create() {
	set( "short", "���¥��¥" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room99.c",
		"west"      : "/open/clan/13_luck/room/room146",
		"east"      : "/open/clan/13_luck/room/room151",
		"south"     : "/open/clan/13_luck/room/room122.c",
		"north"     : "/open/clan/13_luck/room/room123",
		"up"        : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG

    �ڵ�С�������죬�����ŵƻ�������¥���������������˷��¥
��¥��ͨ����������᷿��ȥ���᷿�Ѵ�ɨ�ɾ������Ϸ�����һ����
�ݺõĶ��������裬��������������Ʒ�����Ϻõ������裬������Զ
���ķ羰�����Ǻò���⡣

LONG);
	setup();
	replace_program(ROOM);
}
