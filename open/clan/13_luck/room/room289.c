inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"file1"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10548 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room288",
		"south"     : "/open/clan/13_luck/room/room284.c",
	]) );
	set( "long", @LONG
������..Ϊ��Ӫ�����ĳ��ټݳ����ߵĵ�·..������������·
ϣ����Ҫ�����鷳..����Ƶ�����..��Ȼ�͵��ųԲ��궵����..��Ȼ
���Է羰Ư��..��Ҳûʱ���������ܷ羰..���ǿ�ȥ�����Լ�������
,,��ĳ��پ�����Ҫ�������..
LONG);
	setup();
	replace_program(ROOM);
}
