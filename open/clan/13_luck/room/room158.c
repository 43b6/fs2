inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room158",
		"east"      : "/open/clan/13_luck/room/room157.c",
		"west"      : "/open/clan/13_luck/room/room163.c",
		"north"     : "/open/clan/13_luck/room/room158.c",
	]) );
	set( "long", @LONG

�����������ɭ�֣�����Ũ��ɢ����ǰֻ����ãã��һ��Ƭ������
������ָ��Զ��Ʈ��һ����Ķ��������һƬ���ţ�����������Խ��
������ȥ����������ֲ���ȫ��Խ��ԽŨ�������������ѹ�ȸУ���
�����������ߵĳ嶯��

LONG);
	setup();
	replace_program(ROOM);
}
