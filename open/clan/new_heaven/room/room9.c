inherit ROOM;
void create() {
	set( "short", "$HIG$ָ����Է���$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/new_heaven/room/room6",
		"north"     : "/open/clan/new_heaven/room/room10",
	]) );
	set( "long", @LONG
������, long������Ҫдһ��, ��Ȼ�Ͳ���������long, ����code,
˵Ҫsizeof(long)>100������, ����һ��, ����үû��ô��ʱ��д������,
��������, Ӧ����100���˰�
LONG);
	setup();
	replace_program(ROOM);
}
