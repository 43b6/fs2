inherit ROOM;
void create() {
	set( "short", "����¥ʮ¥" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room97.c",
		"west"      : "/open/clan/13_luck/room/room113.c",
		"down"      : "/open/clan/13_luck/room/room90.c",
		"east"      : "/open/clan/13_luck/room/room118",
		"south"     : "/open/clan/13_luck/room/room95.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥ʮ¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף��������ڿ���
����������Ĺ����ɫ�����ܶ�ô�����������ϻ���һ����ɫ�Ĺ�
��£���Ŵ˹�������һ����ʮ���������̳�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
