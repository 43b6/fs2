inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room229.c",
		"enter"     : "/open/clan/13_luck/room/room226.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

��������һС��·�����������������������߾Ų㣬������������һ
�㣬��˳���������ͷ���ۣ�����������Ǳȵ��컹�ѣ���ڵ���ͷ
���ѵĴ�ھ��Ǵ�����( door )������������һ�������ƣ����������
������������������������ɡ�

LONG);
	setup();
	replace_program(ROOM);
}
