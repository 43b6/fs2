inherit ROOM;
void create() {
	set( "short", "С���ĵ�ҩ��" );
	set( "light_up", 1 );
	set( "build", 10040 );
	set( "exits", ([
		"south"     : "/open/clan/demon_castle/room/room12",
	]) );
	set( "owner", "suzukiami" );
	set( "long", @LONG
�������С������������L�����ĵ�ҩ
��ʽ�����ĵ�ҩ������Ŀ
�������ۻ�����
����...���Ƕ����ڱ��չ���
��ֻ�ܿ�������ȴ�ò���
LONG);
	setup();
	replace_program(ROOM);
}
