inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room157",
		"east"      : "/open/clan/13_luck/room/room157",
		"west"      : "/open/clan/13_luck/room/room157.c",
		"north"     : "/open/clan/13_luck/room/room158.c",
		"out"       : "/open/clan/13_luck/room/room152.c",
	]) );
	set( "long", @LONG

�����������ɭ�֣�����Ũ��ɢ����ǰֻ����ãã��һ��Ƭ������
������ָ�������ڸ���������������У�ֻ������ŨŨ����֮�У���
���Ź�������գ��ƺ���ʲô���������ɴ���˫�ۣ���Զ����������
��һ��һ�����������Ϣѹ���㴭����������

LONG);
	setup();
	replace_program(ROOM);
}
