inherit ROOM;
void create() {
	set( "short", "���Ŵ��" );
	set( "build", 10412 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room16",
	]) );
	set( "long", @LONG
������һ����ɭɭ��·��, ŨŨ���������������, ������
Զ������ɢȥ�Ƶ�. ���Ͽ�ȥ����ǿ���Էֱ��һ����¥��ģ����
������Լ���Կ�����յ����, ��Ũ�����Եø���Ĺ���. ·������
����һ��ľ��Ľ���, �Ŷ��ǰ뿪��, ���㿴�����������ʲô.

LONG);
	setup();
	replace_program(ROOM);
}
