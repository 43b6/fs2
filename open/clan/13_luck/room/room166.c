inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room163.c",
		"south"     : "/open/clan/13_luck/room/room166",
		"west"      : "/open/clan/13_luck/room/room166",
		"north"     : "/open/clan/13_luck/room/room169.c",
	]) );
	set( "long", @LONG

�����������ɭ�֣�����Ũ��ɢ����ǰֻ����ãã��һ��Ƭ������
������ָ��Խ����ͷ��ȥ����������Ũ��ͻȻһ�ɹɵĺ��粻ʱ��
�ķ����������˴��˸��������Զ���Ĳݶ����ʱ����ϡϡ���µ�
�������������ƺ���ʲô���������ǡ�

LONG);
	setup();
	replace_program(ROOM);
}
