inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIW$��$HIY$�ռ�$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"claw"      : "/open/clan/ou-cloud-club/room/room157",
		"helmet"    : "/open/clan/ou-cloud-club/room/room204.c",
		"cloak"     : "/open/clan/ou-cloud-club/room/room161.c",
		"out"       : "/open/clan/ou-cloud-club/room/room156.c",
		"legging"   : "/open/clan/ou-cloud-club/room/room160",
	]) );
	set( "long", @LONG
һ��Ũ���������ݵ�ζ��Ϯ���㣬���ܵĿռ��Ĺ��죬������
�����Ŀռ䣬��������ǧ����������������Ŀռ䣬ƽʱ����������
���ڴ˵أ�һ��ϲ������Ġ�����ʹ�������޹���������ƽ������
���ˣ���������ô������ᱻǧ����������Ĺ�����

LONG);
	setup();
	replace_program(ROOM);
}
