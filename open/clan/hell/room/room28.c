inherit ROOM;
void create() {
	set( "short", "$RED$����������$NOR$��$HIY$�ղص���$NOR$��$HIY$���˲ݻ�$NOR$��" );
	set( "light_up", 1 );
	set( "build", 11663 );
	set( "exits", ([
		"force"     : "/open/clan/hell/room/room31",
		"fan"       : "/open/clan/hell/room/room88.c",
		"ball"      : "/open/clan/hell/room/room86.c",
		"ring"      : "/open/clan/hell/room/room39.c",
		"dagger"    : "/open/clan/hell/room/room90",
		"sword"     : "/open/clan/hell/room/room33.c",
		"claw"      : "/open/clan/hell/room/room89.c",
		"south"     : "/open/clan/hell/room/room23.c",
		"blade"     : "/open/clan/hell/room/room32.c",
		"icer"      : "/open/clan/hell/room/room81.c",
	]) );
	set( "long", @LONG
�����ǵظ����������ղ������ĵط�,���Ĺ��ӹ����Ǵ��Ĵ��L������������
�����ղ�������,�����ղ�Ʒʵ��̫����,�������ղص�����ֻһ��,����������
�����ȥ,�����ղ��������ĵط�,�Ա��ø��Ǹ��ɼ���ظ����˶��ܹ���ʱ��
������ȡ��

LONG);
	setup();
	replace_program(ROOM);
}
