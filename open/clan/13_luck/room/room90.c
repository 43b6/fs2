inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room83.c",
		"east"      : "/open/clan/13_luck/room/room44.c",
		"up"        : "/open/clan/13_luck/room/room94",
		"west"      : "/open/clan/13_luck/room/room45.c",
		"north"     : "/open/clan/13_luck/room/room93.c",
		"south"     : "/open/clan/13_luck/room/room91",
	]) );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף������ƣӴ�½
û��һ����¥�ܱ�ʮ���������������¥���߸����ģ�ȫ����������
���ʱ����ƣ���ס������һ�첻֪�����������ĸ��֡�

LONG);
	setup();
	replace_program(ROOM);
}
