inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room354",
		"north"     : "/open/clan/13_luck/room/room75.c",
		"south"     : "/open/clan/13_luck/room/room74.c",
		"up"        : "/open/clan/13_luck/room/room76.c",
		"down"      : "/open/clan/13_luck/room/room54.c",
		"west"      : "/open/clan/13_luck/room/room73.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף���������ʱ��
��������紵��������Ĵ������������簴ĦƤ��һ������������
΢�����С���ģ�Ҳ�Ǳ���һ���Ȥ��

LONG);
	setup();
	replace_program(ROOM);
}
