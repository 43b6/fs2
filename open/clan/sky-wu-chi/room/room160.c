inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$���ܶ���$HIC$��$NOR$С��" );
	set( "owner", "mudu" );
	set( "light_up", 1 );
	set( "build", 10144 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room24.c",
	]) );
	set( "long", @LONG
������С������ǰ�����ڵ�����ս�������õ��ı���
��Ʒ�����Գ�С��ƽ�������ռ�������ϰ�ߣ�ֻҪ���ѵ�
һ���Ķ���������Ҫ�����⣬����Ķ�����Ȼƽ�����ò�
̫������������µĻ�������������Ķ���һ����������
��������������Ҫ�Ը��Ǵ���������

LONG);
	setup();
	replace_program(ROOM);
}
