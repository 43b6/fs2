inherit ROOM;
void create() {
	set( "short", "���¥��¥" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room102.c",
		"north"     : "/open/clan/13_luck/room/room183.c",
		"up"        : "/open/clan/13_luck/room/room100.c",
		"south"     : "/open/clan/13_luck/room/room196.c",
		"east"      : "/open/clan/13_luck/room/room231.c",
		"west"      : "/open/clan/13_luck/room/room240",
	]) );
	set( "long", @LONG

    �ڵ�С�������죬�����ŵƻ�������¥���������������˷��¥
��¥��ͨ����������᷿��ȥ���Ӵ��������ߵĴ�����ȥ�������ǰ�
��С�Ϸ��Ľ���ġ����⺣�󡯣�������ȥһƬ����󺣣�һ������
����Ҫ�ڳ������ǿ���Ҫ���Ѻô�һ��������а취�ҵ����ڡ�

LONG);
	setup();
	replace_program(ROOM);
}
