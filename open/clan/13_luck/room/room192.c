inherit ROOM;
void create() {
	set( "short", "����" );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room167",
		"down"      : "/open/clan/13_luck/room/room191",
	]) );
	set( "long", @LONG

������Ѩ�﹤��æ��æ���İ��Š��ǵ�ʤ��Ʒ������ͷ��ȥ��������
�ƺ���Ҫ�ᵽ������ȥ������ʳ�õġ�Ѫ���ܵĶ���ʬ�壬Ѫ��һֱ
�������죬ʹ�Ŀ����г�����һ�����ŵ���ζ��ͻȻ���ü�ֻ���ϳ�
������ĵ����㣬��е�һ��ɱ����Χ���������Χ��

LONG);
	setup();
	replace_program(ROOM);
}
