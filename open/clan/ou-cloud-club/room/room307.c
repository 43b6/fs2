inherit ROOM;
void create() {
	set( "short", "[1;32m���ɲ���[0m" );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room306.c",
		"lake"      : "/open/clan/ou-cloud-club/room/room308",
	]) );
	set( "long", @LONG
š���˜�͸���������㷢���Լ�վ��һƬ����ǰ�棬��
��Χ�����ŵ��Ƿ�Ķ������������һ˲��������ȴ����
�ĺ��䣬��Զ����һ������߲��Ĳݴԣ���Լ������ˮ
��������˦��˦���ϵ�ˮ�գ����½������ϵ�������������
����ǰ������ȥ��
��
LONG);
	setup();
	replace_program(ROOM);
}
