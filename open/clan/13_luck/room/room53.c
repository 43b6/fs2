inherit ROOM;
void create() {
	set( "short", "����¥��¥" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room43.c",
		"east"      : "/open/clan/13_luck/room/room55.c",
		"up"        : "/open/clan/13_luck/room/room54",
		"west"      : "/open/clan/13_luck/room/room56.c",
		"north"     : "/open/clan/13_luck/room/room57.c",
		"south"     : "/open/clan/13_luck/room/room58",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �͹ٻ�ӭ����������¥��¥���������µ��᷿�Ѿ�����ɾ��ˡ�
�ӷ��ڵĴ������⿴���Խ�ʮ�������ȫò�����۵ף����絽��ƻ�
ͨ������������˯�����Ų���Ҳ������С͵���ڰ���С�ϵ��쵼�£�
ʮ�������ѿ�ʼ����ȫʢʱ���ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
