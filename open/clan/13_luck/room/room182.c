inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room168",
		"east"      : "/open/clan/13_luck/room/room182.c",
	]) );
	set( "long", @LONG

�����������������ɣ��߽���һ��Ƭ�������У��������ɭ�֣�����
Ũ��ɢ����ǰֻ����ãã��һ��Ƭ�����ֲ�����ָ���紵����ľɳ
ɳ���죬������������ɭɭ�Ĺ������գ�·�ԵĹ�ľ�����ƺ��ж���
�ڶ���������ò�����ʲô�������ްɣ�

LONG);
	setup();
	replace_program(ROOM);
}
