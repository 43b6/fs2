inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room76.c",
		"east"      : "/open/clan/13_luck/room/room84.c",
		"up"        : "/open/clan/13_luck/room/room90",
		"north"     : "/open/clan/13_luck/room/room86.c",
		"west"      : "/open/clan/13_luck/room/room89.c",
		"south"     : "/open/clan/13_luck/room/room81.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף���������ҹ��
��Ҳ��֪Ҫ��Щʲô��ͻ������͸���С���и����ճ�����û�뵽��
�������羰������������������ô��ζ�ɿڡ�

LONG);
	setup();
	replace_program(ROOM);
}
